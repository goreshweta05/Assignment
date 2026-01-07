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
int SumDigit(PNODE Head)
{
    int iDigitSum = 0,no = 0;

    while(Head != NULL)
    {
      no = Head->data;
      iDigitSum = 0;

      while (no != 0)
      {
        iDigitSum = iDigitSum + no % 10;
        no = no / 10;
      }
      printf("%d\t\n",iDigitSum);
      Head = Head->next; 
    }
        return iDigitSum;  
}
int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first,640);
    InsertFirst(&first,240);
    InsertFirst(&first,20);
    InsertFirst(&first,230);
    InsertFirst(&first,110);
    
    SumDigit(first);

    return 0;
}
