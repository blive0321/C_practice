#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *fp;
    char str1[10], str2[10];
    fp = fopen("kobe.txt", "w");

    if(fp)
    {
        fprintf(fp, "Stay strong\n");
        fprintf(fp, "Don't give up\n");

        fputs("Brandon is a man\n",fp);
        fputs("He likes freediving\n",fp);

        fclose(fp);
        printf("成功關閉檔案\n");

    }
    return 0;
}