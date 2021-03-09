#ifndef __STDUNISTD_H
#define __STDUNISTD_H
#include <sys/types.h>
int unlink(const char *path);
int close(int fildes);
pid_t fork(void);
int execvp(const char *file, char *const argv[]);
void _exit(int status);
#endif
