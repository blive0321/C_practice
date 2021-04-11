#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show(int a[]);
void bubble(int a[]);

int main(void)
{
    int data[SIZE] = {26,5,81,7,63};

    printf("排序前");
    show(data);
    bubble(data);  //call bubble sort
    printf("排序後");
    show(data);
    return 0;
}
void show(int a[])
{
    int i;
    for ( i = 0; i < SIZE; i++)
        printf("%d ",a[i]);
    printf("\n");
}
void bubble(int a[])
{
    int i, j, temp;
    for ( i = 1; i < SIZE; i++)  //i控制搜尋次數
    {
        for ( j = 0; j < (SIZE-i); j++)  //j用來控制相鄰2個數做比較
            if (a[j]>a[j+1])  //如果第1個元素 比 第2個元素大
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;  //把最大的元素往後移
            }
    }
}