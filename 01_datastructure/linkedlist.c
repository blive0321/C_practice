#include <stdio.h>
#include <stdlib.h>

struct node  //define the struct of node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

int main(void)
{
    int i, num;
    NODE *first, *current, *previous;
    printf("Enter number of nodes: ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        current = (NODE *) malloc(sizeof(NODE));  //動態配置node記憶體
        printf("Enter data for node %d :",i+1);
        scanf("%d",&(current->data));
        if(i==0)
            first=current;  //i=0代表第一次, 把第一個node給指標節點first當作串列首
        else
            previous->next=current;  //把前一個node的結構成員next指向當前建立node的位址
        current->next=NULL;
        previous=current;
    }
    current=first;  //把串列首給current
    while(current != NULL)
    {
        printf("address=%p ,",current);
        printf("data=%d ,",current->data);
        printf("next=%p \n",current->next);
        current=current->next;
    }
    return 0;
}