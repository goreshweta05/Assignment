#include<stdio.h>

int Fact(int iNo)
{
   if(iNo == 1)
   {
     return 1;
   }
   return iNo * Fact(iNo - 1);
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("%d",iRet);

    return 0;
}

/*
Stack Layout
Fact(5) = 5 * Fact(4)
Fact(4) = 4 * Fact(3)
Fact(3) = 3 * Fact(2)
Fact(2) = 2 * Fact(1)
Fact(1) = 1
*/