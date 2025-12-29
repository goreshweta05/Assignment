#include<stdio.h>

void Display()
{
 static int iCnt = 1;
  if(iCnt <= 5)
  {
    printf("%d\t",iCnt);
    iCnt++;
    Display();
  }
  printf(" ");
}
int main()
{

    Display();
    return 0;
}