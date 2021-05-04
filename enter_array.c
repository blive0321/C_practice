#include <stdio.h>

void str_read(char []);

int main(int argc, char **argv)
{
    char str[20];
    str_read(str);
    printf("%s\n",str);
    return 0;
}

void str_read(char str[])  //讀取鍵盤輸入的字串
{
    int i = 0;
    while (1)
    {
        scanf("%c", &str[i]);
        if( str[i] == '\n')  //當按下enter換行符號\n時, break
            break;
        i++;
    }
    str[i]='\0';  //再把\n改成 字串結尾應該要有的\0
}