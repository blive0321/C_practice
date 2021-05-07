#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c,max;
    printf("Please enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if (b > max)
    {
        max = b;
    };
    if (c > max)
    {
        max = c;
    }
    printf("The maximum number is %d\n", max);
    
    return 0;
}