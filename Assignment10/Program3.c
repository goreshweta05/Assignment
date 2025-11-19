#include<stdio.h>

int KMtoMeter(int iNo)
{
   int iResult = 0;
   iResult = iNo * 1000;
   return iResult;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d\n",iRet);

    return 0;
}

//Time Complexity = 0(1)