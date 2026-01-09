#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
   int data;
   struct  node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}
int CountEven(PNODE Head)
{
    int iCountEven = 0;

    while(Head != NULL)
    {
        if(Head->data % 2 == 0)
        {
           iCountEven++;
        }
        Head = Head->next;
    }
    return iCountEven;
}
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}
int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,52);
    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,64);
 
    iRet = CountEven(head);
    printf("Count of even numbers are: %d\n",iRet);
    
    return 0;
}