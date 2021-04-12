#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int percost = 300;
    int target = 3000;
    int people;
    int total = 0;
    printf("請輸入此桌人數 : ");
    scanf("%d",&people);

    //判斷消費金額是否達到3000, 達到就打8折
    if ((total = people * percost) < target)
    {
        printf("未達8折的消費金額3000門檻, 總消費金額為:%d\n",total);
    }else{
        printf("達8折消費金額3000門檻, 總消費金額為:%.0f\n",total*0.8);
    }
    return 0;
}