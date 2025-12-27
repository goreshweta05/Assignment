#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
   if(chDiv == 'a' || chDiv == 'A')
   {
     printf("Exam of Div A at 7 AM..");
   }
   else if(chDiv == 'b' || chDiv == 'B')
   {
    printf("Exam of Div B at 8:30 AM..");
   }
   else if(chDiv == 'c' || chDiv == 'C')
   {
    printf("Exam of Div C at 9:20 AM..");
   }
   else
   {
    printf("Exam of Div D at 10:30 AM..");
   }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division: \n");
    scanf("%c",&cValue);

      DisplaySchedule(cValue);

    return 0;
}
