#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

// ./a.out argv[1] argv[2]
int main(int argc, char *argv[])
{
    unsigned char c;
    int in, out;
    
    in = open(argv[1], O_RDONLY);
    out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

    while ( read(in, &c, 1) == 1 )
    {
        write( out, &c, 1);
    }

    close(in);
    close(out);
    exit(0);
    
}