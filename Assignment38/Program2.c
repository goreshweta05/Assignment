#include<stdio.h>

void StrCpyx(char *src,char *dest)
{
    int i = 0,j = 0;
    while(src[i] != '\0')
    {
        if(src[i] != ' ')
        {
            dest[j] = src[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
}
int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30];

    StrCpyx(arr,brr);
    printf("%s",brr);

    return 0;
}