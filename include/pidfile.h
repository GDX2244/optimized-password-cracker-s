/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _PIDFILE_H
#define _PIDFILE_H

#include <stdio.h>
#include <unistd.h>
#include <errno.h>

#if defined (_POSIX)
#include <sys/types.h>
#include <sys/stat.h>
#else
#include <windows.h>
#include <psapi.h>
#endif // _POSIX

void unlink_pidfile (hashcat_ctx_t *hashcat_ctx);

int pidfile_ctx_init (hashcat_ctx_t *hashcat_ctx);

void pidfile_ctx_destroy (hashcat_ctx_t *hashcat_ctx);

#endif // _PIDFILE_H
