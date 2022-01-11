/*
 * Copyright (c) 2018 Asserter. All rights reserved.
 *         Use is subject to license terms.
 *            See LICENSE for details.
 */

#ifndef _GE_H
#define _GE_H

#include <stdlib.h>
#include <time.h>
#include <limits.h>

#ifndef ULLONG_MAX
#define ULLONG_MAX		((unsigned long long)-1)
#endif

#ifdef __cplusplus
extern "C" {
#endif

char ge_char(char min, char max);
char ge_char_ex(char min, char max, char ex);

int ge_int(int min, int max);
int ge_int_ex(int min, int max, int ex);

long ge_long(long min, long max);
long ge_long_ex(long min, long max, long ex);

long long ge_llong(long long min, long long max);
long long ge_llong_ex(long long min, long long max, long long ex);

unsigned char ge_uchar(unsigned char min, unsigned char max);
unsigned char ge_uchar_ex(unsigned char min, unsigned char max, unsigned char ex);

unsigned ge_uint(unsigned min, unsigned max);
unsigned ge_uint_ex(unsigned min, unsigned max, unsigned ex);

unsigned long ge_ulong(unsigned long min, unsigned long max);
unsigned long ge_ulong_ex(unsigned long min, unsigned long max, unsigned long ex);

unsigned long long ge_ullong(unsigned long long min, unsigned long long max);
unsigned long long ge_ullong_ex(unsigned long long min, unsigned long long max,
	unsigned long long ex);

#ifdef __cplusplus
}
#endif

#endif	/* _GE_H */
