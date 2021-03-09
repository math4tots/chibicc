#ifndef __STDGLOB_H
#define __STDGLOB_H

#include <stddef.h>

typedef struct {
    size_t gl_pathc; /* Count of paths matched by pattern. */
    char ** gl_pathv; /* Pointer to a list of matched pathnames. */
    size_t gl_offs; /* Slots to reserve at the beginning of gl_pathv. */
} glob_t;

int glob(const char *restrict pattern, int flags,
       int(*errfunc)(const char *epath, int eerrno),
       glob_t *restrict pglob);
void globfree(glob_t *pglob);

#endif
