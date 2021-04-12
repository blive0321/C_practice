#include <stdio.h>
#include <stdlib.h>

int division(int,int);

int main(void)
{
    int num1,num2,gcd;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);

    gcd=division(num1,num2);
    printf("The greatest common divisor(gcd) is : %d\n",gcd);
    printf("\n");
    return 0;
}

int division(int num1,int num2)
{
    int tmp;
    //先找較大值
    if (num1 < num2)
    {
        tmp=num1;
        num1=num2;
        num2=tmp;
    }
    //輾轉相除法
    while(num2 != 0)
    {
        tmp = num1 % num2;
        num1=num2;
        num2=tmp;
    }
    return num1;  //return gcd
}