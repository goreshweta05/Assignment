#include<stdio.h>

void print_factors(int number)
{
    int iCnt = 0;
   for(iCnt = 1;iCnt <= number; iCnt++)
   {
    if(number % iCnt == 0)
    {
        printf("%d\t",iCnt);
    }
   }
}
int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    print_factors(number);
    
    return 0;
}

//Time Complexity = 0(n)