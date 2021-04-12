#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int arr[SIZE];
    for ( i = 0; i < SIZE; i++)
    {
        printf("%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    while (1)
    {
        printf("Q : ");
        scanf("%d",&i);
        if (i==0)
            break;
        printf("%d\n",arr[i-1]);
    }
    return 0;
}

//讓使用者輸入5個整數後, 可以依照輸入的順序號碼去查詢儲存的資料
//參考https://www.youtube.com/watch?v=4UVVxMNS0xA&list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx&index=121