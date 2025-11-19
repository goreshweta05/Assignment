#include<stdio.h>

void Display()
{
    int iValue = 0;
     iValue = 5;

    while(iValue >= 1)
    {
        printf("%d\n",iValue);
        iValue--;
    }
}

int main()
{
    Display();

    return 0;
}