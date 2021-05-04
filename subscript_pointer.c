#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int v[5] = {1, 2, 3, 4 ,5};
    int *n = v;
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("n%d = %d\n", i , n[i]);  //下標運算子[]
        // n[0] == *n
        // n[1] == *(n+1)
    }
    return 0;
}