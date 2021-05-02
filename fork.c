#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    pid_t pid; //宣告int變數 pid
    char message[100];
    int n;

    printf("fork starting\n");
    pid = fork();  //開始多工程序

    switch(pid) //fork() return 0 代表是子程序, return 子程序的PID流水號代表是父程序, return -1代表錯誤
    {
    case -1:
        perror("fork failed");
        exit(1);  //1代表非正常退出 , 0代表正常退出
    case 0:
        sprintf(message, "This is 子程序 %d", getpid()); //getpid(), 抓自己的pid檔案流水號, 抓誰叫出來的用getppid()
        n = 5;
        break;
    default:
        sprintf(message, "This is 父程序 %d", getpid());
        n = 3;
        break;
    }

    //父程序跑3次,  子程序跑5次
    for( ; n > 0; n--) {
        puts(message);
        sleep(1);
    }

	printf("process %d end\n", getpid());
	
    exit(0);
}

