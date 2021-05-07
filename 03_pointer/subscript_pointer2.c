// []是下標運算子 subscript operator 
// 用迴圈找出陣列的最大值並回傳
#include <stdio.h>
#include <stdlib.h>

int maxv(int[]);

int main(int argc, char **argv)
{
    int a[3] = {3, 9, 7};
    printf("Max number : %d\n", maxv(a));
    return 0;
}

int maxv(int *v)  //int v[] 或 int *v 都合法 , 因為a[b] == *(a+b) 讓指標用起來就像陣列一樣
{
    int max = v[0], i;
    for ( i = 0; i < 3; i++)
    {
        if (v[i] > max)  //v[i]可寫成*(v+i)
        {
            max = v[i];
        }
    }
    return max;
}