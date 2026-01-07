#include<stdio.h>
#include<stdlib.h>

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
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
int SearchFirstOcc(PNODE Head,int no)
{
    int pos = 1;

    while(Head != NULL)
    {
        if(Head->data == no)
        {
            return pos;
        }
          Head = Head->next;
        pos++;
    }
    return -1;
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);

    iRet = SearchFirstOcc(first,50);
    printf("first occurence position: %d\n",iRet);

    return 0;
}
