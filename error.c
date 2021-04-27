#include <errno.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *fp;

    fp = fopen("no_such_file","r");

    if ( fp == NULL )
    {
        printf("Error : %s\n",strerror(errno));  //No such file or directory
    }
    fclose(fp);

    return 0;
}