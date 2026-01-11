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
void DisplayReverse(PNODE Head)
{
    if(Head != NULL)
    {
        DisplayReverse(Head->next);
        printf("%d ",Head->data);
    }
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

    InsertFirst(&head,24);
    InsertFirst(&head,5);
    InsertFirst(&head,29);
    InsertFirst(&head,13);
 
    DisplayReverse(head);
   
    return 0;
}