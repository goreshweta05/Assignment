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
int Frequency(PNODE Head,int no)
{
    int iFrequency = 0;

    while(Head != NULL)
    {
        if(Head->data == no)
        {
           iFrequency++;
        }
        Head = Head->next;
    }
    return iFrequency;
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
    
    InsertFirst(&head,21);
    InsertFirst(&head,21);
    InsertFirst(&head,25);
    InsertFirst(&head,21);
 
    iRet = Frequency(head,21);
    printf("Frequency of 21 is: %d\n",iRet);
    
    return 0;
}