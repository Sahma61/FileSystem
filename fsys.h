#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>

int myfopen(char *ch) {
    int fd;
    fd= open(ch, O_RDWR | O_CREAT, 0777);
    return fd;
}

int myfread(void *out, int howmanybytes, int fd) {
    ssize_t nr = read(fd, out, howmanybytes);
    return nr;
}

int myfwrite(void *in, int howmanybytes, int fd) {
    ssize_t nr = write(fd, in, howmanybytes);
    return nr;
}

int myfseek(int pos, int fd) {
    off_t nr = lseek(fd, (off_t) pos, SEEK_SET);
    return nr;
}

void myfclose(int fd) {
    if( close(fd) == -1)
    perror("Error closing.");
}
