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
void DisplayPerfect(PNODE Head)
{
    int iCnt = 0,iSum = 0,no = 0;

    while(Head != NULL)
    {
        no = Head->data;
        iSum = 0;

        for(iCnt = 1;iCnt <= no/2;iCnt++)
        {
            if(no % iCnt == 0)
                iSum = iSum + iCnt;
        }
          if(iSum == no)
            printf("%d\t",no);

          Head = Head->next;
    }
}
int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);
    
    DisplayPerfect(first);
    return 0;
}
