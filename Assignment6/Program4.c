#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iResult = 1;

    if(iNo1 != 0)
      iResult = iResult * iNo1;
    
    if(iNo2 != 0)
      iResult = iResult * iNo2;

    if(iNo3 != 0)  
      iResult = iResult * iNo3;

    return iResult;  

}
int mian()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0,iRet = 0;
    printf("Please enter three numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    
    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is: %d\n",iRet);

    return 0;
}