#include <stdio.h>
#include <stdlib.h>
#include "include/linkedlist.h"

int main(void)
{
    NODE *first, *node;
    int arr[]={12,38,57};
    first=createList(arr,3);  //create linked list by array
    printList(first);

    node=searchNode(first,38);  //從串列首找出38在哪一個節點
    first=deleteNode(first,node);  //把38節點刪除
    printList(first);

    first=deleteNode(first,first);  //刪除串列首
    printList(first);

    first=deleteNode(first,first);  //刪除串列首
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
        while(current!=NULL)  //當當前node is not NULL, print結構成員data
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

// 搜尋鏈結串列的值
NODE *searchNode(NODE *first, int item)
{
    NODE *current=first;
    while(current!=NULL)
    {
        if(current->data==item)
            return current;
        else
            current=current->next;
    }
    return NULL;  //find nothing
}

// 插入新的鏈結串列
void insertNode(NODE *node, int item)
{
    NODE *newnode;
    newnode=(NODE *) malloc(sizeof(NODE));
    newnode->data=item;
    newnode->next=node->next;  //將舊的節點的下一個節點指向newnode的下一個節點
    node->next=newnode;  //將舊的節點的下一個節點指向newnode
}

// 刪除既有的鏈結串列
NODE *deleteNode(NODE *first, NODE *node)
{
    NODE *current=first;
    if(first==NULL)
    {
        printf("Nothing to delete!\n");
        return NULL;
    }
    if(node==first)  //如果要刪除的某個節點等於串列首
        first=first->next;  //把串列首指向下一個節點
    else
    {
        while(current->next!=node)  //當串列首指向的下一個節點 不等於 要刪除的某個節點
            current=current->next;  //把串列首的下一個節點設給current, 進行下一個節點判斷
        current->next=node->next;   //把某個要刪除節點的下一個節點設給串列首的下一個節點, 才可以刪除某個節點
    }
    free(node);  //釋放某個節點記憶體
    return first;
}