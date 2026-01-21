#include <iostream>
using namespace std;

template <class T>
T Div(T no1,T no2)
{
    return no1 / no2;
}

int main()
{
   int iRet = Div(20,5);
   printf("Division is: %d\n",iRet);

   float fRet = Div(24.12,10.00);
   printf("Division is: %f\n",fRet);

   return 0;
}
