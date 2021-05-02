#include <stdio.h>
#include <stdlib.h>

int max10(int num[10]);
int avg10(int num[10]);

int main(int argc, char **argv){
    int num[10];
    int i;
    for ( i = 0; i < 10; i++){
        scanf("%d",&num[i]);
    }
    printf("\n");
    printf("The maximum number is : %d. \n", max10(num));
    printf("The average number is : %d. \n", avg10(num));
    return 0;
}

int max10(int num[10]){
    int i, max = num[0];
    for ( i = 0; i < 10; i++){
        if (num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int avg10(int num[10]){
    int i, sum = 0;
    for ( i = 0; i < 10; i++){
        sum += num[i];
    }
    return sum;
}