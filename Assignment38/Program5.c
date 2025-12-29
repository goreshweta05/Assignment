#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    int i = 0;
    while(src[i] != '\0')
    {
        if(src[i] >= 'A' && src[i] <= 'Z')
        {
            dest[i] = src[i] + 32;    
        }
        else if(src[i] >= 'a' && src[i] <= 'z')
        {
          dest[i] = src[i] - 32;
        }
        else
        {
            dest[i] = src[i];
        }
        i++;
    }
    dest[i] = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyCap(arr,brr);
    printf("%s",brr);

    return 0;
}