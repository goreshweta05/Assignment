#include<stdio.h>

int count_factors(int number)
{
    int iCnt = 0,count = 0;
   for(iCnt = 1;iCnt <= number; iCnt++)
   {
    if(number % iCnt == 0)
    {
       count++;
    }
   }
   return count;
}
int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("Total factors: %d\n",count_factors(number));
    
    return 0;
}

//Time Complexity = 0(N)