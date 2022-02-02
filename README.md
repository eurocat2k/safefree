# safefree

This small library intends to free memory allocated on the HEAP,
but before of that it checks whether the pointer is NULL,
after sets its value to NULL.

The idea is coming from the book *Understanding and Using C pointers* by Richard Reese (O'Reilly).
Copyright 2013 Richard Reese, Ph.D.978-1-449-34418-4.

## install ##

Download the package into your destination subdirectory, extract it.
Run *configure* with *--prefix* as you desired. Or just simply run ***make***.

```bash
./configure --prefix=`pwd`

make install clean
```

## usage ##

If you successfully built the library, you can use it free. But before of that, let the
linker - and the compiler as well - know where it can find the header file and the library files.

Do not pollute the system's library with this one, put the *lib* and *include* directories into
your project's directory system, and setup references in your Makefile to be able to deal with
during the compile and build phase.

```makefile
...
CFLAGS+=-I./path_of_safefree_include
...
LDFLAGS+=-L./path_of_safefree_lib -lsafefree
...
```
