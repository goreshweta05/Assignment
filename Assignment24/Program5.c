#include<stdio.h>
#include<stdlib.h>

int DigitsSum(int Arr[],int iLength)
{
   int iCnt = 0,iTemp = 0,iSum = 0,iDigit = 0;

    for(iCnt = 0;iCnt < iLength; iCnt++)
   { 
     iTemp = Arr[iCnt];
     iSum = 0;

     while (iTemp != 0)
     {
        iDigit = iTemp % 10;
        iSum = iSum + iDigit;
        iTemp = iTemp / 10;
     }
     printf("%d\t",iSum);
 }
 
}
int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;

    printf("Enter number of Elements: ");
    scanf("%d",&iSize);      
    
   p =  (int *)malloc(iSize * sizeof (int));
   if(NULL == p)                                         
   {
     printf("Unable to allocate memory\n ");
     return -1;
   }

   printf("Enter the elements: \n");

   for(iCnt = 0;iCnt < iSize;iCnt++)
   { 
    scanf("%d",&p[iCnt]);
   }
   iRet = DigitsSum(p,iSize);
   printf("%d\n",iRet);

   free(p);
   return 0;
}