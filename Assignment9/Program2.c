#include<stdio.h>

int DollarToINNR(int iNo)
{
      int iResult = 0;
      iResult = iNo * 70;
      return iResult;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarToINNR(iValue);
    
    printf("Value in INR is %d",iRet);

    return 0;
}