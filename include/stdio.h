#ifndef __STDSTDIO_H
#define __STDSTDIO_H

#include <stdarg.h>
#include <stddef.h>

typedef struct {
    int __id;
} FILE;

extern FILE * stderr;
extern FILE * stdout;
extern FILE * stdin;

int vfprintf ( FILE * stream, const char * format, va_list arg );
int fprintf ( FILE * stream, const char * format, ... );
int printf ( const char * format, ... );
FILE * fopen ( const char * filename, const char * mode );
int fclose ( FILE * stream );
size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
int fflush ( FILE * stream );
int fputc ( int character, FILE * stream );

/**
 * POSIX
 */
FILE *open_memstream(char **bufp, size_t *sizep);

#endif
