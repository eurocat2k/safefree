AM_CFLAGS=-O0
# LIBRARIES
lib_LTLIBRARIES = libsafefree.la
# SAFEFREE LIBRARY
include_HEADERS=safefree.h
libsafefree_la_SOURCES=safefree.c
libsafefree_la_CFLAGS=-Wall -fPIC -O0 -I. -I/usr/include -I/usr/local/include
libsafefree_la_LDFLAGS=-version-info 1:0:0
libsafefree_la_LDFLAGS+=-R/usr/local/lib -L/usr/local/lib -lm -lc
libsafefree_la_LDFLAGS+=-L/usr/lib -lc -lpthread

build_dir=@PACKAGE_NAME@/@PACKAGE_VERSION@

distdir=$(top_srcdir)/$(build_dir)

