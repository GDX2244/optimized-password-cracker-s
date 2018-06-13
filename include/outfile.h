/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _OUTFILE_H
#define _OUTFILE_H

#include <stdio.h>
#include <time.h>
#include <inttypes.h>

int build_plain (hashcat_ctx_t * hashcat_ctx, hc_device_param_t * device_param, plain_t * plain, u32 * plain_buf, int *out_len);

int build_crackpos (hashcat_ctx_t * hashcat_ctx, hc_device_param_t * device_param, plain_t * plain, u64 * out_pos);

int build_debugdata (hashcat_ctx_t * hashcat_ctx, hc_device_param_t * device_param, plain_t * plain, u8 * debug_rule_buf, int *debug_rule_len, u8 * debug_plain_ptr, int *debug_plain_len);

int outfile_init (hashcat_ctx_t * hashcat_ctx);

void outfile_destroy (hashcat_ctx_t * hashcat_ctx);

int outfile_write_open (hashcat_ctx_t * hashcat_ctx);

void outfile_write_close (hashcat_ctx_t * hashcat_ctx);

int outfile_write (hashcat_ctx_t * hashcat_ctx, const char *out_buf, const unsigned char *plain_ptr, const u32 plain_len, const u64 crackpos, const unsigned char *username, const u32 user_len, char tmp_buf[HCBUFSIZ_LARGE]);

#endif // _OUTFILE_H
