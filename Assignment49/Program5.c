#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
  int data;
  struct node *next;
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
 int CountTwoDigit(PNODE Head)
{
    int iCount = 0;
   while(Head != NULL)
   {
     if((Head->data >= 10 && Head->data <= 99) || (Head->data <= -10 && Head->data >= -99))
     {
        iCount++;
     }
     
     Head = Head->next;
   }
   return iCount;
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
    
    InsertFirst(&head,254);
    InsertFirst(&head,18);
    InsertFirst(&head,20);
    InsertFirst(&head,1);
 
    iRet = CountTwoDigit(head);
    printf("Count of Two digits numbers are: %d\n",iRet);
     
    return 0;
}