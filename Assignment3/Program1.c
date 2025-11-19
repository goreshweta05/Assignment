#include<stdio.h>

void PrintEven(int iNo)
{  
    

    if(iNo <= 0)
    {
        return ;
    }
    int iCnt = 0;
    int iNum = 2;

    while(iCnt < iNo)
    {
        printf("%d\t",iNum);
        iNum += 2;
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}