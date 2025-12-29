#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str,char ch)
{
    int i = 0;
    int iPos = -1;

  while(str[i] != '\0')
  {
    if(str[i] == ch)
    {
      iPos = i;
    }
    i++;
  }
  return iPos;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("character location is %d",iRet);

    return 0;
}