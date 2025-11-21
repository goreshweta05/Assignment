#include<stdio.h>

int sum_of_factors(int number)
{
    int iCnt = 0,iSum= 0;
   for(iCnt = 1;iCnt <= number; iCnt++)
   {
    if(number % iCnt == 0)
    {
       iSum = iSum + iCnt;
    }
   }
   return iSum;
}
int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("Sum of factors: %d\n",sum_of_factors(number));
    
    return 0;
}

//Time Complexity = 0(N)