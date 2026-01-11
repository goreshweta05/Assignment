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
void DisplayOddPosition(PNODE Head)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(iPos % 2 != 0)
        {
            printf("%d ",Head->data);
        }
        iPos++;
        Head = Head->next;
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

    InsertFirst(&head,23);
    InsertFirst(&head,5);
    InsertFirst(&head,20);
    InsertFirst(&head,19);
 
    DisplayOddPosition(head);
     
    return 0;
}