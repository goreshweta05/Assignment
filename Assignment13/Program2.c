#include<stdio.h>

void print_even_numbers(int limit)
{ 
    int iCnt = 0;
    iCnt = 2;
  while(iCnt <= limit )
  {
    if(iCnt % 2 == 0)
    {
    printf("%d\t",iCnt);
    }
    iCnt++;
  }
}
int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d",&limit);

    print_even_numbers(limit);
    return 0;
}

//Time Complexity = 0(N)