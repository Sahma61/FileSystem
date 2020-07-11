#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include "fsys.h"

int main()
{
	char pwd[100];
    char *r = getcwd(pwd, sizeof(pwd));
    if (r == NULL)
    {
        perror("Error getting pwd");
        exit(1);
    }
    strcat(pwd, "/xyzFS");
    strcat(pwd, "/myfile1.txt");
    int fd=myfopen(pwd);
    if (fd == -1)
            perror("Error opening file.");
    char in[100]="hello there";
    char out[100];
    int nwr = myfwrite(in, 5, fd);
    if(nwr == -1)
            perror("Error Writing.");
    myfclose(fd);
    fd=myfopen(pwd);
    if (fd == -1)
            perror("Error opening file.");
    int nr = myfread(out, 5, fd);
    if(nr == -1)
            perror("Error Reading.");
    printf("%s", out);
    return 0;
}

