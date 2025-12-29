#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str,char ch)
{
    int i = 0;

  while(str[i] != '\0')
  {
    if(str[i] == ch)
    {
      return i;
    }
    i++;
  }
  return -1;
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

    iRet = FirstChar(arr,cValue);

    printf("character location is %d",iRet);

    return 0;
}