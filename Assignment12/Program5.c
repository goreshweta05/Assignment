#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int number)
{
    if(number % 5 == 0)
    {
      return true;
    }
    else
    {
       return false;
    }
   }
int main(void)
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("%d\n",is_divisible_by_five(number));
    
    return 0;
}

//Time Complexity = 0(1)