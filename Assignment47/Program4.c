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
void DisplayPrime(PNODE Head)
{
    int iCnt = 0,iFlag = 0;

    while(Head != NULL)
    {
       if(Head->data > 1)
       {
        iFlag = 1;
        for(iCnt = 2;iCnt <= Head->data/2;iCnt++)
        {
            if(Head->data % iCnt == 0)
            {
                iFlag = 0;
                break;
            }
        }
        if(iFlag == 1)
        {
            printf("%d ",Head->data);
        }
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

    InsertFirst(&head,23);
    InsertFirst(&head,13);
    InsertFirst(&head,2);
    InsertFirst(&head,10);
 
    DisplayPrime(head);
   
    return 0;
}