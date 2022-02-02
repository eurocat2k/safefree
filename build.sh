#!/bin/sh
aclocal && autoreconf -ivf && ./configure --prefix=`pwd` && make install clean
