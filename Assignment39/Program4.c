#include<stdio.h>

void Display()
{
   static char ch = 'A';
   
   if(ch <= 'F')
  {
    printf("%c\t",ch);
    ch++;
    Display();
  }
  printf(" ");
}
int main()
{

    Display();
    return 0;
}