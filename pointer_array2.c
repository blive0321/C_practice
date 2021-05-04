#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int v[5] = {1, 2, 3, 4, 5};
    int *p = v;
    int i;

    while (p != v+5)
    {
        *p++ = 0;  //把陣列v歸0
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",v[i]);
    }
    return 0;
}