#include <stdio.h>
#include <stdlib.h>
#define  MAXSTACK 10

int stack[MAXSTACK];
int top = -1;
int isEmpty(void);
void push(int);
int pop(void);

int main(int argc, char *argv[])
{
    int value;
    int i;
    printf("請依序輸入10筆資料:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&value);
        push(value);  //call push()
    }
    printf("====================\n");
    while(!isEmpty())
    {
        printf("堆疊pop彈出的順序為:%d\n",pop());
    }
    pop();
    return 0;
}

int isEmpty()
{
    if(top==-1)  //代表堆疊是空的
    {
        return 1;
    }else{
        return 0;
    }
}

void push(int data)
{
    if(top>=MAXSTACK)
    {
        printf("堆疊已滿,無法再加入\n");
    }else{
        top++;
        stack[top]=data;
    }
}

int pop()
{
    int data;
    if(isEmpty())
    {
        printf("堆疊已空\n");
    }else{
        data=stack[top];
        top--;
        return data;
    }
    return 0;
}

/*
the stack functions are
push : 把資料放進stack
pop : 把資料從stack取出
top : stack最上面的資料
isEmpty : 判斷stack裡面有沒有資料
*/