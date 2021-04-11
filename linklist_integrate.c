#include <stdio.h>
#include <stdlib.h>
#include "include/linklist.h"

int main(void)
{
    NODE *first;
    int arr[]={14,27,32,46};
    first=createList(arr,4);  //create linklist by array
    printList(first);
    freeList(first);

    return 0;
}

// 建立鏈結串列
NODE *createList(int *arr, int len)
{
    int i;
    NODE *first, *current, *previous;
    for (i = 0; i < len; i++)
    {
        current=(NODE *) malloc(sizeof(NODE));
        current->data=arr[i];  //把當前節點的data設為arr陣列的第i個元素
        if(i==0)
            first=current;
        else
            previous->next=current;
        current->next=NULL;
        previous=current;
    }
    return first;  //return 串列首
}

// 印出鏈結串列 , 走訪traverse
void printList(NODE *first)
{
    NODE *current=first;
    if(first==NULL)
        printf("List is empty!\n");
    else
    {
        while(current!=NULL)  //當node is not NULL, print結構成員data
        {
            printf("%3d", current->data);  //print當前node的data
            current=current->next;  //把當前node指向下一個node的位址給node
        }
        printf("\n");
    }
}

// 釋放記憶體空間
void freeList(NODE *first)
{
    NODE *current, *tmp;
    current=first;
    while(current!=NULL)
    {
        tmp=current;  //先把當前node給tmp
        current=current->next;  //再把下一個node給current
        free(tmp);  //釋放tmp記憶體
    }
}