// 指標與陣列
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int num[5] = {10, 20, 30, 40 ,50};
    int *ptr = num;
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("ptr+%d = %d\n",i, *(ptr+i));
    }
    /* 可以寫成下面
    for ( ; ptr != &num[5]; ptr++)
    {
        printf("%d\n", *ptr);
    }
    */

   /*  或這樣寫
   while(ptr != num+5){
       printf("%d\n",*ptr++);
   }
   */

    return 0;
}