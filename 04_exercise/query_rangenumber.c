//讓使用者輸入10個數字, 並輸入查詢的上限及下限, 並顯示在範圍內的所有數字, 當min和max輸入0 0就結束程式
//參考https://www.youtube.com/watch?v=rCbHN_ZZmPQ&list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx&index=122
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int i, min, max;
    int arr[SIZE];

    printf("Please enter 10 numbers below\n");
    for ( i = 0; i < SIZE; i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Please enter min & max : ");
    while (1)
    {
        scanf("%d %d",&min , &max);
        if(min == 0 && max == 0)
            break;
        printf("The numbers between min & max are : ");
        for ( i = 0; i < SIZE; i++)
        {
            if (min <= arr[i] && arr[i] <= max) 
            {
                printf("%d ",arr[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}