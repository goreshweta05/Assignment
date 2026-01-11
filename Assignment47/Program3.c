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
void SumDigits(PNODE Head)
{
    int temp = 0,iSum = 0,iDigit = 0;

    while(Head != NULL)
    {
       temp = Head->data;
       iSum = 0;

       while(temp != 0)
       {
        iDigit = temp % 10;
        iSum = iSum + iDigit;
        temp = temp / 10;
       }
       printf("Sum of digits of %d = %d\n",Head->data,iSum);
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

    InsertFirst(&head,2344);
    InsertFirst(&head,52);
    InsertFirst(&head,2);
    InsertFirst(&head,173);
 
    SumDigits(head);
   
    return 0;
}