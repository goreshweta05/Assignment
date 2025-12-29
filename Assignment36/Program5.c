#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ')
        {
            iCount++;
        }
        iCnt++;
    }
    return iCount++;
}
int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

   iRet = CountWhite(arr);
   printf("%d",iRet);

    return 0;
}