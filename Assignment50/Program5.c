#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
 void Dispay(PNODE Head,int pos)
{
   int iCount = 1;

   while(Head != NULL)
   {
    if(iCount == pos)
    {
        printf("Element at position %d is %d\n",pos,Head->data);
        return;
    }
    iCount++;
    Head = Head->next;
   }
   printf("Invalid position");
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
    
    InsertFirst(&head,67);
    InsertFirst(&head,28);
    InsertFirst(&head,25);
    InsertFirst(&head,14);
 
    Dispay(head,2);
     
    return 0;
}