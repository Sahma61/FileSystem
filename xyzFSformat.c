#include<sys/stat.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv) {
    char pwd[100];
    char *r = getcwd(pwd, sizeof(pwd));
    if (r == NULL)
    {
        perror("Error getting pwd");
        exit(1);
    }
    strcat(pwd, "/xyzFS");
    int nr = mkdir(pwd, 0777);
    return 0;
}
