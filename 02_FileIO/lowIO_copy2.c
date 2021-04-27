#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned char block[1024];
    int in, out, nread;

    in = open(argv[1], O_RDONLY);
    out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

    while ( (nread=read(in, block, sizeof(block))) > 0 )  //read() return -1 means error
    {
        write(out, block, nread);  //上一行nread讀多少byte, 此行就nread寫多少byte, 才會一致
    }

    close(in);
    close(out);
    exit(0);
}
