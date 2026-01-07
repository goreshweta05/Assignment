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
int SearchLastOcc(PNODE Head,int no)
{
    int iPos = 1,iLast = -1;

    while(Head != NULL)
    {
        if(Head->data == no)
        {
            iLast = iPos;
        }
          Head = Head->next;
        iPos++;
    }
    return iLast;
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,10);
    InsertFirst(&first,20);
    InsertFirst(&first,30);
    InsertFirst(&first,40);
    InsertFirst(&first,50);
     InsertFirst(&first,30);
     InsertFirst(&first,70);
 
    iRet = SearchLastOcc(first,30);
    printf("Last occurence position: %d\n",iRet);

    return 0;
}
