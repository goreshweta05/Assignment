#include<stdio.h>

int Mult(int iNo)
{
   if(iNo == 0)
   {
     return 1;
   }
   return (iNo % 10) * Mult(iNo / 10);
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("%d",iRet);

    return 0;
}

/*Stack Layout
Mult(234) = 4 * Mult(23)
Mult(234) = 3 * Mult(2)
Mult(234) = 2 * Mult(0)
Mult(0)   = 1
*/