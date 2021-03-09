#ifndef __STDSTDLIB_H
#define __STDSTDLIB_H
#include <stddef.h>
void* calloc (size_t num, size_t size);
void* realloc (void* ptr, size_t size);
void exit (int status);
int mkstemp(char *template);
int atexit (void (*func)(void));
unsigned long int strtoul (const char* str, char** endptr, int base);
long double strtold (const char* str, char** endptr); /* C++11 */
#endif
