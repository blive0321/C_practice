#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char str1[20], str2[20]; //char str[60]
    FILE *fp;
    
    fp = fopen("kobe.txt","r");
    
    if(fp != NULL)
    {
        printf("開啟檔案成功!\n");
        printf("開始讀取檔案資料...\n");

        fscanf(fp,"%s %s",str1, str2);
        printf("%s %s\n",str1, str2);
        // fgets (str, 60, fp);
        // puts(str);

        fclose(fp);
        printf("關閉檔案成功!\n");
    }
}
