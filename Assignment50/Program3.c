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
 bool CheckSort(PNODE Head)
{
    if(Head == NULL)
    {
        return true;
    }
    while(Head->next != NULL)
    {
        if(Head->data > Head->next->data)
        {
            return false;
        }
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
    
    InsertFirst(&head,30);
    InsertFirst(&head,28);
    InsertFirst(&head,20);
    InsertFirst(&head,14);
 
    if(CheckSort(head))
    {
        printf("List is sorted");
    }
    else
    {
        printf("List is not sorted");
    }
     
    return 0;
}