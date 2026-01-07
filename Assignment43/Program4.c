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
int SecMaximum(PNODE Head)
{
    int iMax1 = 0,iMax2 = 0;

    while(Head != NULL)
    {
            if(Head->data > iMax1)
            {
                iMax2 = iMax1;
                iMax1 = Head->data;
            }
            else if(Head->data > iMax2 && Head->data != iMax1)
            {
                iMax2 = Head->data;
            }
            Head = Head->next;
    }
        return iMax2;  
}
int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first,240);
    InsertFirst(&first,320);
    InsertFirst(&first,230);
    InsertFirst(&first,110);
    
    printf("Second maximum : %d ",SecMaximum(first));

    return 0;
}
