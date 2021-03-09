#ifndef __STDSTAT_H
#define __STDSTAT_H
#include <time.h>
struct stat {
    // dev_t     st_dev;         /* ID of device containing file */
    // ino_t     st_ino;         /* Inode number */
    // mode_t    st_mode;        /* File type and mode */
    // nlink_t   st_nlink;       /* Number of hard links */
    // uid_t     st_uid;         /* User ID of owner */
    // gid_t     st_gid;         /* Group ID of owner */
    // dev_t     st_rdev;        /* Device ID (if special file) */
    // off_t     st_size;        /* Total size, in bytes */
    // blksize_t st_blksize;     /* Block size for filesystem I/O */
    // blkcnt_t  st_blocks;      /* Number of 512B blocks allocated */
    time_t    st_atime;   /* time of last access */
    time_t    st_mtime;   /* time of last modification */
    time_t    st_ctime;   /* time of last status change */
};
int stat(const char *path, struct stat *buf);
#endif
