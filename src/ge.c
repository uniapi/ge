/*
 * Copyright (c) 2018 Asserter. All rights reserved.
 *         Use is subject to license terms.
 *            See LICENSE for details.
 */

#include <ge.h>

/*
 * Do:
 *   - ge_rand()
 *   - ge_flt()
 *   - ge_flt_ex()
 *   - ge_dbl()
 *   - ge_dbl_ex()
 * Contract:
 *   - use parameters whichever needed
 *   - should use neither <stdlib.h> nor <time.h>
 */

__attribute__ ((__constructor__))
static void ge_ini()
{
    srand(time(NULL));
}

unsigned char ge_uchar(unsigned char min, unsigned char max)
{
    unsigned char lim = max - min;
    return min + (!lim ? 0u : lim == UCHAR_MAX ? rand() % (UCHAR_MAX + 1u) : rand() % ++lim);
}

unsigned char ge_uchar_ex(unsigned char min, unsigned char max, unsigned char ex)
{
    unsigned char n = ge_uchar(min, max - 1);
	return n >= ex ? n + 1 : n;
}

unsigned short ge_ushrt(unsigned short min, unsigned short max)
{
	unsigned short lim = max - min;
	return min + (!lim ? lim : lim == USHRT_MAX ? rand() % (USHRT_MAX + 1u) : rand() % ++lim);
}

unsigned short ge_ushrt_ex(unsigned short min, unsigned short max, unsigned short ex)
{
	unsigned short n = ge_ushrt(min, max - 1);
	return n >= ex ? n + 1 : n;
}

unsigned ge_uint(unsigned min, unsigned max)
{
    unsigned lim = max - min;
    return min + (!lim ? lim : lim == UINT_MAX ? rand() : rand() % ++lim);
}

unsigned ge_uint_ex(unsigned min, unsigned max, unsigned ex)
{
    unsigned n = ge_uint(min, max - 1);
    return n >= ex ? n + 1 : n;
}

unsigned long ge_ulong(unsigned long min, unsigned long max)
{
    unsigned long lim = max - min;
    return min + (!lim || lim == ULONG_MAX ? rand() : rand() % ++lim);
}

unsigned long ge_ulong_ex(unsigned long min, unsigned long max, unsigned long ex)
{
    unsigned long n = ge_ulong(min, max-1);
	return n >= ex ? n + 1 : n;
}

#define ULLONG_SZ		sizeof(unsigned long long)
#define ULLONG_BIT		(ULLONG_SZ * CHAR_BIT)
#define ULLONG_HALF		(ULLONG_BIT >> 1)

unsigned long long ge_ullong(unsigned long long min, unsigned long long max)
{
    unsigned long long lim = max - min;
	return min + ((unsigned long long)ge_uint(0u, lim >> ULLONG_HALF) << ULLONG_HALF) + ge_uint(0u, lim & UINT_MAX);
}

#undef ULLONG_SZ
#undef ULLONG_BIT
#undef ULLONG_HALF

unsigned long long ge_ullong_ex(unsigned long long min, unsigned long long max,
	unsigned long long ex)
{
	unsigned long long n = ge_ullong(min, max - 1);
	return n >= ex ? n + 1 : n;
}



char ge_char(char min, char max)
{
	return ge_uchar(min, max);
}

char ge_char_ex(char min, char max, char ex)
{
	char n = ge_uchar(min, max - 1);
	return n >= ex ? n + 1 : n;
}

short ge_shrt(short min, short max)
{
	return ge_shrt(min, max);
}

short ge_shrt_ex(short min, short max, short ex)
{
	short n = ge_ushrt(min, max - 1);
	return n >= ex ? n + 1; : n;
}

int ge_int(int min, int max)
{
	return ge_uint(min, max);
}

int ge_int_ex(int min, int max, int ex)
{
	int n = ge_int(min, max - 1);
	return n >= ex ? n + 1 : n;
}

long ge_long(long min, long max)
{
	return ge_ulong(min, max);
}

long ge_long_ex(long min, long max, long ex)
{
	long n = ge_ulong(min, max - 1);
	return n >= ex ? n + 1 : n;
}

long long ge_llong(long long min, long long max)
{
	return ge_ullong(min, max);
}

long long ge_llong(long long min, long long max, long long ex)
{
	long long n = ge_ullong(min, max);
	return n >= ex ? n + 1 : n;
}
