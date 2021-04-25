#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int counter[6] = {0}; //把計次變數用整數陣列簡化宣告了
    int i, j, dice;
    for ( i = 1; i <= 6000; ++i) //擲骰子6000次
    {
        dice = rand() % 6 + 1;  //rand()會產生0~RAND_MAX(int的最大值)之間的隨機整數
        for ( j = 1; j <= 6; ++j) //用j判斷是否要計算次數
        {
            if (dice == j)
            {
                counter[j-1]++;
            }
        }
    }
    for ( j = 1; j <= 6; ++j)
    {
        printf("點數 %d 的次數 : %d\n", j , counter[j-1]);
    }
    return 0;
}
