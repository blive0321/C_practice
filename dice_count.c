#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int count1 = 0, count2 = 0, count3 = 0;
    int count4 = 0, count5 = 0, count6 = 0;
    int i, dice;
    for ( i = 0; i <= 6000; i++)  //dice 6000 times
    {
        dice = rand() % 6 + 1 ;   //+1是if剛好整除餘數為0, 必須+1
        switch (dice)  //多重選擇dice
        {
        case 1:
            count1++;  break;
        case 2:
            count2++;  break;
        case 3:
            count3++;  break;
        case 4:
            count4++;  break;
        case 5:
            count5++;  break;
        case 6:
            count6++;  break;
        default:
            break;
        }
    }
    printf("1 : %d\n",count1);
    printf("2 : %d\n",count2);
    printf("3 : %d\n",count3);
    printf("4 : %d\n",count4);
    printf("5 : %d\n",count5);
    printf("6 : %d\n",count6);
    return 0;
}