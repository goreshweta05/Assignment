#include<stdio.h>

int Difference(char *str)
{
    int iCapital = 0,iSmall = 0;
     
    if(str == NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
      if(*str >= 'a' && *str <= 'z')
      {
        iSmall++;
      }
      else
      {
        iCapital++;
      }
      str++;
    }
    return iSmall - iCapital;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d",iRet);

    return 0;
}