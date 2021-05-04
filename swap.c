#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main(int argc, char **argv)
{
    int a = 3, b = 5;
    printf("Before swap : ...\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    swap(&a,&b);
    printf("After swap : ...\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 原則：可以call by value就用call by value, 因為這樣不用擔心副程式可能會因為call by address而改到main裡面的變數值, 且用起來較為方便
// 除非：要傳入的引數是陣列或字串, 或size太大, 那就使用指標