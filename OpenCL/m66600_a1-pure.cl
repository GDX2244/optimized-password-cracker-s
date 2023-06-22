/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

//#define NEW_SIMD_CODE

#ifdef KERNEL_STATIC
#include M2S(INCLUDE_PATH/inc_vendor.h)
#include M2S(INCLUDE_PATH/inc_types.h)
#include M2S(INCLUDE_PATH/inc_platform.cl)
#include M2S(INCLUDE_PATH/inc_common.cl)
#include M2S(INCLUDE_PATH/inc_scalar.cl)
#include M2S(INCLUDE_PATH/inc_hash_md5.cl)
#endif

DECLSPEC u32 djb2_g (const u32 init, GLOBAL_AS const u32 *w, const u32 pw_len)
{
  u32 hash = init;

  for (u32 i = 0; i < pw_len; i += 4)
  {
    u32 tmp = w[i / 4];

    const u32 left = pw_len - i;

    const u32 c = (left > 4) ? 4 : left;

    switch (c)
    {
      case 1:
        hash *= 33; hash += (tmp >>  0) & 0xff;
        break;
      case 2:
        hash *= 33; hash += (tmp >>  0) & 0xff;
        hash *= 33; hash += (tmp >>  8) & 0xff;
        break;
      case 3:
        hash *= 33; hash += (tmp >>  0) & 0xff;
        hash *= 33; hash += (tmp >>  8) & 0xff;
        hash *= 33; hash += (tmp >> 16) & 0xff;
        break;
      case 4:
        hash *= 33; hash += (tmp >>  0) & 0xff;
        hash *= 33; hash += (tmp >>  8) & 0xff;
        hash *= 33; hash += (tmp >> 16) & 0xff;
        hash *= 33; hash += (tmp >> 24) & 0xff;
        break;
    }
  }

  return hash;
}

KERNEL_FQ void m66600_mxx (KERN_ATTR_BASIC ())
{
  /**
   * modifier
   */

  const u64 lid = get_local_id (0);
  const u64 gid = get_global_id (0);

  if (gid >= GID_CNT) return;

  /**
   * loop
   */

  for (u32 il_pos = 0; il_pos < IL_CNT; il_pos++)
  {
    u32 hash = 0;

    if (COMBS_MODE == COMBINATOR_MODE_BASE_LEFT)
    {
      hash = djb2_g (hash, pws[gid].i,          pws[gid].pw_len);
      hash = djb2_g (hash, combs_buf[il_pos].i, combs_buf[il_pos].pw_len);
    }
    else
    {
      hash = djb2_g (hash, combs_buf[il_pos].i, combs_buf[il_pos].pw_len);
      hash = djb2_g (hash, pws[gid].i,          pws[gid].pw_len);
    }

    const u32x r0 = hash;
    const u32x r1 = 0;
    const u32x r2 = 0;
    const u32x r3 = 0;

    COMPARE_M_SCALAR (r0, r1, r2, r3);
  }
}

KERNEL_FQ void m66600_sxx (KERN_ATTR_BASIC ())
{
  /**
   * modifier
   */

  const u64 lid = get_local_id (0);
  const u64 gid = get_global_id (0);

  if (gid >= GID_CNT) return;

  /**
   * digest
   */

  const u32 search[4] =
  {
    digests_buf[DIGESTS_OFFSET_HOST].digest_buf[DGST_R0],
    0,
    0,
    0
  };

  /**
   * loop
   */

  for (u32 il_pos = 0; il_pos < IL_CNT; il_pos++)
  {
    u32 hash = 0;

    if (COMBS_MODE == COMBINATOR_MODE_BASE_LEFT)
    {
      hash = djb2_g (hash, pws[gid].i,          pws[gid].pw_len);
      hash = djb2_g (hash, combs_buf[il_pos].i, combs_buf[il_pos].pw_len);
    }
    else
    {
      hash = djb2_g (hash, combs_buf[il_pos].i, combs_buf[il_pos].pw_len);
      hash = djb2_g (hash, pws[gid].i,          pws[gid].pw_len);
    }

    const u32x r0 = hash;
    const u32x r1 = 0;
    const u32x r2 = 0;
    const u32x r3 = 0;

    COMPARE_S_SCALAR (r0, r1, r2, r3);
  }
}
