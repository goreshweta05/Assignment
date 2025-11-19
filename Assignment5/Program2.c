#include<stdio.h>

int FindMax(int a,int b)
{
   if(a > b)
   {
     printf("a is greater than b\n");
   }
   else
   {
    printf("b is greater than a\n");
   }
}
int main()
{
    int num1,num2,result;

    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);

    result = FindMax(num1,num2);
    printf("Maximum is: %d\n",result);

    return 0;
}