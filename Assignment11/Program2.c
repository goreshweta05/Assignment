#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt = 0;
    int iNo = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
      if(iCnt % 2 == 0)
      printf("%d\t",iCnt);
   }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter starting point ");
    scanf("%d",&iValue1);

    printf("Enter ending point ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}

//Time Complexity = 0(n)