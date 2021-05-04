#include <stdio.h>

int main(int argc, char **argv)
{
        int number;
        while ( scanf("%d", &number) != 1)
        {
            printf("Error!\n");
            fflush(stdin);  //如果讀不到要的資料格式(ex:abc), 會一直print Error, 所以要清除stdin的資料
        }
        printf("%d\n",number);
        return 0;
    
}