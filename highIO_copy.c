#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char block[1024];
    FILE *in, *out;
    int nread;

    in = fopen(argv[1], "r");
    out = fopen(argv[2], "w");

    while( (nread = fread(block, 1, 1024, in)) > 0 )
    {
        fwrite(block, 1, nread, out);
    }
    
    if(0==(fclose(in)))
        printf("關閉%d檔案成功!\n",argv[1]);
    else
        printf("關閉%d檔案失敗!\n",argv[1]);
    
    if(0==(fclose(out)))
        printf("關閉%d檔案成功!\n",argv[1]);
    else
        printf("關閉%d檔案失敗!\n",argv[1]);
    exit(0);
}