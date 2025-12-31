#include<stdio.h>

int Sum(int iNo)
{
   if(iNo == 0)
   {
     return 0;
   }
   return (iNo % 10) + Sum(iNo / 10);
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("Sum is %d",iRet);

    return 0;
}

/*Stack Layout
Sum(123) = 3 + Sum(12)
Sum(12) = 2 + Sum(1)
Sum(1) =  1 + Sum(0)
Sum(0) = 0
*/