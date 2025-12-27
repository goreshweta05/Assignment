#include<stdio.h>

void DisplayASCII()
{
  int iCnt = 0;

  printf("Decimal\tHexadecimal\tOctal\tSymbol\n");
  printf("---------------------------------------------------\n");

  for(iCnt = 0;iCnt <= 255;iCnt++)
  {
    printf("%d\t%X\t\t%o\t",iCnt,iCnt,iCnt);
    
    if(iCnt >= 32 && iCnt <= 126)
    {
        printf("%c",iCnt);
    }
    else
    {
        printf("-");
    }
    printf("\n");
  }
}
int main()
{

    DisplayASCII();
    return 0;
}