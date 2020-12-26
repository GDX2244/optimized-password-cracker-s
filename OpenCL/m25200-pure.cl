/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

//#define NEW_SIMD_CODE

#define SNMPV3_OPT1

#ifdef KERNEL_STATIC
#include "inc_vendor.h"
#include "inc_types.h"
#include "inc_platform.cl"
#include "inc_common.cl"
#include "inc_simd.cl"
#include "inc_hash_sha1.cl"
#endif

#define COMPARE_S "inc_comp_single.cl"
#define COMPARE_M "inc_comp_multi.cl"

#define SNMPV3_SALT_MAX 375
#define SNMPV3_ENGINEID_MAX 32
#define SNMPV3_MSG_AUTH_PARAMS_MAX 12

typedef struct hmac_sha1_tmp
{
  u32  dgst[5];
  u32  out[3];

} hmac_sha1_tmp_t;

typedef struct snmpv3
{
  u32 salt_buf[SNMPV3_SALT_MAX];
  u32 salt_len;

  u8  engineID_buf[SNMPV3_ENGINEID_MAX];
  u32 engineID_len;

} snmpv3_t;

KERNEL_FQ void m25200_init (KERN_ATTR_TMPS_ESALT (hmac_sha1_tmp_t, snmpv3_t))
{
  /**
   * modifier
   */

  const u64 lid = get_local_id (0);
  const u64 gid = get_global_id (0);

  if (gid >= gid_max) return;

  /**
   * base
   */

  const global u8 *pw_buf = (global u8 *) pws[gid].i;

  const u32 pw_len = pws[gid].pw_len;

  const global u8 *engineID_buf = esalt_bufs[DIGESTS_OFFSET].engineID_buf;

  u32 engineID_len = esalt_bufs[DIGESTS_OFFSET].engineID_len;

  /**
   * authkey
   */

  u32 idx = 0;

  u8 tmp_buf[72] = { 0 };

  sha1_ctx_t ctx;

  sha1_init (&ctx);

  for (int j = 0; j < 16384; j++)
  {
    for (int i = 0; i < 64; i++)
    {
      tmp_buf[i] = pw_buf[idx++];

      if (idx >= pw_len) idx = 0;
    }

    sha1_update_swap (&ctx, (u32 *)tmp_buf, 64);
  }

  sha1_final (&ctx);

  const u32 h[5] = {
    hc_swap32_S (ctx.h[0]),
    hc_swap32_S (ctx.h[1]),
    hc_swap32_S (ctx.h[2]),
    hc_swap32_S (ctx.h[3]),
    hc_swap32_S (ctx.h[4])
  };

  u8 buf[72] = { 0 };

  #ifdef SNMPV3_OPT1

  buf[ 0] = as_uchar4 (h[0]).x;
  buf[ 1] = as_uchar4 (h[0]).y;
  buf[ 2] = as_uchar4 (h[0]).z;
  buf[ 3] = as_uchar4 (h[0]).w;

  buf[ 4] = as_uchar4 (h[1]).x;
  buf[ 5] = as_uchar4 (h[1]).y;
  buf[ 6] = as_uchar4 (h[1]).z;
  buf[ 7] = as_uchar4 (h[1]).w;

  buf[ 8] = as_uchar4 (h[2]).x;
  buf[ 9] = as_uchar4 (h[2]).y;
  buf[10] = as_uchar4 (h[2]).z;
  buf[11] = as_uchar4 (h[2]).w;

  buf[12] = as_uchar4 (h[3]).x;
  buf[13] = as_uchar4 (h[3]).y;
  buf[14] = as_uchar4 (h[3]).z;
  buf[15] = as_uchar4 (h[3]).w;

  buf[16] = as_uchar4 (h[4]).x;
  buf[17] = as_uchar4 (h[4]).y;
  buf[18] = as_uchar4 (h[4]).z;
  buf[19] = as_uchar4 (h[4]).w;

  #else // ! SNMPV3_OPT1

  buf[ 0] =  h[0] & 0xff;
  buf[ 1] = (h[0] >> 8) & 0xff;
  buf[ 2] = (h[0] >> 16) & 0xff;
  buf[ 3] = (h[0] >> 24) & 0xff;

  buf[ 4] =  h[1] & 0xff;
  buf[ 5] = (h[1] >> 8) & 0xff;
  buf[ 6] = (h[1] >> 16) & 0xff;
  buf[ 7] = (h[1] >> 24) & 0xff;

  buf[ 8] =  h[2] & 0xff;
  buf[ 9] = (h[2] >> 8) & 0xff;
  buf[10] = (h[2] >> 16) & 0xff;
  buf[11] = (h[2] >> 24) & 0xff;

  buf[12] =  h[3] & 0xff;
  buf[13] = (h[3] >> 8) & 0xff;
  buf[14] = (h[3] >> 16) & 0xff;
  buf[15] = (h[3] >> 24) & 0xff;

  buf[16] =  h[4] & 0xff;
  buf[17] = (h[4] >> 8) & 0xff;
  buf[18] = (h[4] >> 16) & 0xff;
  buf[19] = (h[4] >> 24) & 0xff;

  #endif // SNMPV3_OPT1

  u32 j;
  u32 i = 20;

  for (j = 0; j < engineID_len; j++)
  {
    buf[i++] = engineID_buf[j];
  }

  for (j = 0; j < 20; j++)
  {
    buf[i++] = buf[j];
  }

  sha1_init (&ctx);

  sha1_update_swap (&ctx, buf, i);

  sha1_final (&ctx);

  tmps[gid].dgst[0] = ctx.h[0];
  tmps[gid].dgst[1] = ctx.h[1];
  tmps[gid].dgst[2] = ctx.h[2];
  tmps[gid].dgst[3] = ctx.h[3];
  tmps[gid].dgst[4] = ctx.h[4];
}

KERNEL_FQ void m25200_loop (KERN_ATTR_TMPS_ESALT (hmac_sha1_tmp_t, snmpv3_t))
{
  /**
   * modifier
   */

  const u64 gid = get_global_id (0);

  if ((gid * VECT_SIZE) >= gid_max) return;

  u32x key[16] = { 0 };

  key[0] = packv (tmps, dgst, gid, 0);
  key[1] = packv (tmps, dgst, gid, 1);
  key[2] = packv (tmps, dgst, gid, 2);
  key[3] = packv (tmps, dgst, gid, 3);
  key[4] = packv (tmps, dgst, gid, 4);

  u32x s[375] = { 0 };

  const u32 salt_len = esalt_bufs[DIGESTS_OFFSET].salt_len;

  for (u32 i = 0, idx = 0; i < salt_len; i += 4, idx += 1)
  {
    s[idx] = esalt_bufs[DIGESTS_OFFSET].salt_buf[idx];
  }

  sha1_hmac_ctx_vector_t ctx;

  sha1_hmac_init_vector (&ctx, key, 20);

  sha1_hmac_update_vector (&ctx, s, salt_len);

  sha1_hmac_final_vector (&ctx);

  unpackv (tmps, out, gid, 0, ctx.opad.h[DGST_R0]);
  unpackv (tmps, out, gid, 1, ctx.opad.h[DGST_R1]);
  unpackv (tmps, out, gid, 2, ctx.opad.h[DGST_R2]);
}

KERNEL_FQ void m25200_comp (KERN_ATTR_TMPS_ESALT (hmac_sha1_tmp_t, snmpv3_t))
{
  /**
   * base
   */

  const u64 gid = get_global_id (0);

  if (gid >= gid_max) return;

  const u64 lid = get_local_id (0);

  const u32 r0 = tmps[gid].out[DGST_R0];
  const u32 r1 = tmps[gid].out[DGST_R1];
  const u32 r2 = tmps[gid].out[DGST_R2];
  const u32 r3 = 0;

  #define il_pos 0

  #ifdef KERNEL_STATIC
  #include COMPARE_M
  #endif
}
