#include<stdio.h>

int sum_even_numbers(int limit)
{ 
    int iCnt = 0,iSum = 0;
    iCnt = 1;
    
  while(iCnt <= limit )
  {
    if(iCnt % 2 == 0)
    {
      iSum = iSum + iCnt;
    }
    iCnt++;
  }
  return iSum;
}
int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d",&limit);

    printf("Sum of first n even numbers : %d\n",sum_even_numbers(limit));
    return 0;
}

//Time Complexity = 0(N)