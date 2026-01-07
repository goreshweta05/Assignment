#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
int Addition(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        iSum = iSum + Head->data;
        Head = Head->next;
    }
    return iSum;
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,10);
    InsertFirst(&first,20);
    InsertFirst(&first,30);
    InsertFirst(&first,40);
    
    iRet = Addition(first);
    printf("Addition is : %d\n",iRet);

    return 0;
}
