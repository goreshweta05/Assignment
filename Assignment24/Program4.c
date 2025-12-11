#include<stdio.h>
#include<stdlib.h>

int Digits(int Arr[],int iLength)
{
   int iCnt = 0,iDigitCount = 0,iTemp = 0;

    for(iCnt = 0;iCnt < iLength; iCnt++)
   { 
    iTemp = Arr[iCnt];
    iDigitCount = 0;

     while(iTemp != 0)
     {
        iDigitCount++;
       iTemp = iTemp / 10; 
     }
    if(iDigitCount == 3)
    {
      printf("%d\t",Arr[iCnt]);
    }
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
   iRet = Digits(p,iSize);
   printf("%d\n",iRet);

   free(p);
   return 0;
}