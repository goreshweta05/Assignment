#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
   int iCnt = 0;

    for(iCnt = 0;iCnt < iLength; iCnt++)
   { 
    if(Arr[iCnt] == iNo)
    {
      return true;
    }
 }
   return false;
}
int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of Elements: ");
    scanf("%d",&iSize);
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

   p =  (int *)malloc(iSize * sizeof (int));
   if(NULL == p)                                         
   {
     printf("Unable to allocate memory\n ");
     return -1;
   }

   printf("Enter the elements: \n");

   for(iCnt = 0;iCnt < iSize;iCnt++)
   {
       scanf("%d",&p[iCnt]+1);
   }

   bRet = Check(p,iSize,iValue);

   if(bRet == TRUE)
   {
    printf("Number is present");
   }
   else
   {
    printf("Number is not present");
   }

   free(p);

    return 0;
}