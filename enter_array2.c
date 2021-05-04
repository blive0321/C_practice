#include <stdio.h>

void str_read(char [], int);

int main(int argc, char **argv)
{
    char str[15];
    str_read(str, 14);
    printf("%s\n",str);
    return 0;
}

void str_read(char str[], int n)  //讀取鍵盤輸入的字串, n用來限制讀取的迴圈次數
{
    int i = 0;
    for ( i = 0; i < n ; i++)
    {
        scanf("%c",&str[i]);
        if ( str[i] == '\n')  //當user提早按下enter, break
            break;
    }
    str[i] = '\0';
}