// pipe open = popen
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[ ])
{
    FILE *read_fp; //popen()函數會returnFILE指標, 所以設1個FILE指標
    char buffer[1000]; //宣告字元陣列buffer, 要給fread()函數用
    int chars_read; //宣告整數變數chars_read, 要給fread()函數return用, 因為fread()會return讀了多少個物件
    
    read_fp = popen("uname -a", "r"); 
    if (read_fp != NULL) { //popen()執行失敗會return NULL, 執行成功會return檔案指標
        chars_read = fread(buffer, sizeof(char), sizeof(buffer)-1, read_fp);
        if (chars_read > 0) {
            buffer[chars_read] = '\0';
            printf("Output was:-\n%s\n", buffer);
        }
        pclose(read_fp);
    }
    exit(0);
}

