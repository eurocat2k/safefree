#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([safefree], [1.0], [gabor.zelenak@me.com])
AC_CONFIG_SRCDIR([src/safefree.h])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC([cc])
AC_PROG_CC_C99([cc])
AC_PROG_CC_C_O
LT_PREREQ([2.2])
LT_INIT([dlopen])
AC_PROG_LIBTOOL
AC_PROG_INSTALL
AM_INIT_AUTOMAKE

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lc':
AC_CHECK_LIB([c], [main])
# FIXME: Replace `main' with a function in `-lm':
AC_CHECK_LIB([m], [main])
# FIXME: Replace `main' with a function in `-lpthread':
AC_CHECK_LIB([pthread], [main])

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
