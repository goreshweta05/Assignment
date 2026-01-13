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
 bool CheckAllPositive(PNODE Head)
{
   while(Head != NULL)
   {
     if(Head->data <= 0)
     {
       return false;
     }
     Head = Head->next;
   }
   return true;
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
    
    InsertFirst(&head,-23);
    InsertFirst(&head,5);
    InsertFirst(&head,20);
    InsertFirst(&head,19);
 
   if(CheckAllPositive(head))
   {
    printf("All elements are positive");
   }
   else
   {
    printf("All elements are not positive");
   }
   
    return 0;
}