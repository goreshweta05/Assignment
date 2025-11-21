#include<stdio.h>

int sum_natural_numbers(int limit)
{ 
    int iCnt = 0,iSum = 0;
    iCnt = 1;
    
  while(iCnt <= limit )
  {
    iSum = iSum + iCnt;
    
    iCnt++;
  }
  return iSum;
}
int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d",&limit);

    printf("Sum of first n natural numbers is %d\n",sum_natural_numbers(limit));
    return 0;
}

//Time Complexity = 0(N)