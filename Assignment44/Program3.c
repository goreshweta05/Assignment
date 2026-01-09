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
int CountOdd(PNODE Head)
{
    int iCountOdd = 0;

    while(Head != NULL)
    {
        if(Head->data % 2 != 0)
        {
           iCountOdd++;
        }
        Head = Head->next;
    }
    return iCountOdd;
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
    InsertFirst(&head,25);
    InsertFirst(&head,64);
 
    iRet = CountOdd(head);
    printf("Count of odd numbers are: %d\n",iRet);
    
    return 0;
}