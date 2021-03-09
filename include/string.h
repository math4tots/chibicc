#ifndef __STDSTRING_H
#define __STDSTRING_H
#include <stddef.h>
void * memset ( void * ptr, int value, size_t num );
int memcmp ( const void * ptr1, const void * ptr2, size_t num );
void * memcpy ( void * destination, const void * source, size_t num );
int strcmp ( const char * str1, const char * str2 );
char * strncpy ( char * destination, const char * source, size_t num );
size_t strlen ( const char * str );
const char * strchr ( const char * str, int character );
      char * strchr (       char * str, int character );
const char * strrchr ( const char * str, int character );
      char * strrchr (       char * str, int character );
const char * strstr ( const char * str1, const char * str2 );
      char * strstr (       char * str1, const char * str2 );
int strncmp ( const char * str1, const char * str2, size_t num );
char * strerror ( int errnum );
char * strtok ( char * str, const char * delimiters );
/**
 * POSIX
 */
char * strdup( const char *str1 );
char *strndup(const char *s, size_t size);
#endif
