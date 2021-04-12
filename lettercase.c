#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char input, output;
    printf("請輸入一個小寫字元: ");
    scanf("%c",&input);
    output = input - 32;  //因為ASCII碼的大小寫間隔32, 大寫轉小寫就是+32
    printf("轉換大寫後: %c\n",output);
    return 0;
}