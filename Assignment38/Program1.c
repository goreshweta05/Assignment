#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{
    int i = 0,j = 0;
    while(src[i] != '\0')
    {
        i++;
    }
    for(j = 0;i>0;i--,j++)
    {
        dest[j] = src[i - 1];
    }
    dest[j] = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);
    printf("%s",brr);

    return 0;
}