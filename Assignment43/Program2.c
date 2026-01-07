#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = *Head;
    *Head = newn;
}
void DisplayPrime(PNODE Head)
{
    int iCnt = 0,iFlag = 0;

    while(Head != NULL)
    {
        iFlag = 0;

        for(iCnt = 2;iCnt <= Head->data/2;iCnt++)
        {
            if(Head->data % iCnt == 0)
            {
                iFlag = 1;
                break;
            }
        }
          if(iFlag == 0 && Head->data > 1)
            printf("%d\t",Head->data);
          Head = Head->next;
    }
}
int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first,89);
    InsertFirst(&first,22);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,20);
    InsertFirst(&first,11);
    
    DisplayPrime(first);
    return 0;
}
