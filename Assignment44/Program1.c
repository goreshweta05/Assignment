#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
bool Search(PNODE Head,int no)
{
    while(Head != NULL)
    {
        if(Head->data == no)
        {
            return true;
        }
        Head = Head->next;
    }
    return false;
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
    
    InsertFirst(&head,51);
    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,61);
    
    if(Search(head,81))
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}