#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        printf("$\t*\t");
     }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0 ;
}