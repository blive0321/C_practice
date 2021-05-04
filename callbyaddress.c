#include <stdio.h>
#include <stdlib.h>

void add(int *);

int main(int argc, char **argv)
{
    int n = 3;
    printf("n = %d\n",n);
    add(&n);  //call by address
    printf("n = %d\n",n);
    return 0;
}

void add(int *a)
{
    *a = *a + 1;
}