#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if((iNo % 2 )== 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd Number");
    }
} 
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    return 0 ;
}