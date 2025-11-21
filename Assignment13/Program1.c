#include<stdio.h>

void print_numbers(int limit)
{ 
    int iCnt = 0;
    iCnt = 1;
  while(iCnt <= limit )
  {
    printf("%d\t",iCnt);
    iCnt++;
  }
}
int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d",&limit);

    print_numbers(limit);
    return 0;
}

//Time Complexity = 0(N)