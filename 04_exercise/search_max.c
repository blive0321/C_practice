// user輸入10個數字後, 從10個數字裡找出user想search的最大值
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, query, number[10]={0};
    printf("Please enter 10 numbers below : "); //輸入10個整數
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&number[i]);
    }

    while(1){
        int max = -1;
        printf("Enter number you want to search : ");
        scanf("%d",&query);
        if(query == 0) //跳離無窮迴圈
            break; //當沒有while loop, 用return 0
        
        for ( i = 0; i < 10; i++) //跟10個整數陣列的元素比對
        {
            if (number[i] <= query && number[i] > max)
            {
                max = number[i];
            }
            
        }
        
        if ( max != -1)
        {
            printf("%d \n",max);
        }
    }
    return 0;
}