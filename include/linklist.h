struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *createList(int *, int);   //Function create linklist
void printList(NODE *);  //Function printf linklist
void freeList(NODE *);  //Function free memory
void insertNode(NODE *, int);  //Function insert node
NODE *searchNode(NODE *, int);  //Function search node
NODE *deleteNode(NODE *, NODE *);  //Function delete node