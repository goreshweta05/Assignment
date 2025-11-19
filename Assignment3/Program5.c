#include<stdio.h>

typedef int Bool;

#define TRUE 1
#define FALSE 0

Bool ChkVowel(char CValue)
{
    if(CValue == 'A' || CValue =='E' || CValue == 'I'
     || CValue == 'O' || CValue == 'U' || CValue == 'a' 
     ||CValue == 'e' || CValue == 'o' || CValue == 'u')
    {
        return TRUE;
    }
    else
    {
         return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    Bool bRet = 0;

    printf("Enter character\n");
    scanf("%c",&cValue);
    
    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    return 0;
}