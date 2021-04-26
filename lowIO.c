#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int fdA, fdB, fdC;

    fdA = open("FileA.txt", O_RDONLY);
    fdB = open("FileB.txt", O_RDWR | O_CREAT | O_TRUNC, 0664);
    fdC = open("FileC.txt", O_WRONLY | O_CREAT | O_APPEND, 0664);

    printf("File A = %d\n",fdA);
    printf("File B = %d\n",fdB);
    printf("File C = %d\n",fdC);

    close(fdA);
    close(fdB);
    close(fdC);

    return 0;
}
