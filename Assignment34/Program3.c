#include<stdio.h>

void Display(char ch)
{
    char c = '\0';

  if(ch >= 'A' && ch <= 'Z')
  {
    for(c = ch;c <= 'Z';c++)
    {
      printf("%c ",c);
    }
  }
  else if(ch >= 'a' && ch <= 'z')
  {
    for(c = ch; c >= 'a';c--)
    {
      printf("%c ",c);
    }
  }
  else
  {
    return;
  }
}
int main()
{
   char cValue = '\0';

   printf("Enter a character: \n");
   scanf("%c",&cValue);
    
   Display(cValue);
    return 0;
}