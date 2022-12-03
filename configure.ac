AC_COPYRIGHT([Copyright (c) 2018-2022 Asserter, Org.]
[Licensed under the Open Software License ("OSL") v 3.0])

m4_define([GE_MAJOR_VERSION], 0)
m4_define([GE_MINOR_VERSION], 1)
m4_define([GE_MICRO_VERSION], 0)

AC_INIT([libge], [GE_MAJOR_VERSION.GE_MINOR_VERSION.GE_MICRO_VERSION])
AM_INIT_AUTOMAKE([foreign])

AC_CONFIG_SRCDIR([src/ge.c])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])

lt_current=1
lt_revision=0
lt_age=1
LTLDFLAGS="-version-info ${lt_current}:${lt_version}:${lt_age}"

# Checks for programs.
AC_PREREQ([2.69])
AC_PROG_CC
LT_INIT

# Checks for header files.
AC_CHECK_HEADERS([limits.h])
AC_CHECK_HEADERS([stdlib.h])
AC_CHECK_HEADERS([time.h])

AC_CONFIG_FILES([
 Makefile
 src/Makefile
 share/man/man3c/Makefile
])

AC_OUTPUT
