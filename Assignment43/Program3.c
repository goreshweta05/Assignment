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
int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
            if(Head->data % 2 == 0)
            {
                iSum = iSum + Head->data;
            }
            Head = Head->next;
    }
        return iSum;  
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;
    
    InsertFirst(&first,41);
    InsertFirst(&first,32);
    InsertFirst(&first,20);
    InsertFirst(&first,11);
    
    iRet = AdditionEven(first);
    printf("Addition of even elements : %d",iRet);

    return 0;
}
