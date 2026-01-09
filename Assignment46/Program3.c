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


bool IsEmpty(PNODE Head)
{
        if(Head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    
}

int main()
{
    PNODE head = NULL;
 
    if(IsEmpty(head))
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Linked list is not empty\n");
    }
   
    return 0;
}