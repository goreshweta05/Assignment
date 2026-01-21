#include <iostream>
using namespace std;

template <class T>
T Sub(T no1,T no2)
{
    return no1 - no2;
}

int main()
{
   int iRet = Sub(24,5);
   printf("Substraction is: %d\n",iRet);

   float fRet = Sub(24.12,10.00);
   printf("Substraction is: %f\n",fRet);

   return 0;
}
