#include <iostream>
using namespace std;

template <class T>
T Add(T no1,T no2)
{
    return no1 + no2;
}

int main()
{
   int iRet = Add(24,5);
   printf("Addition is: %d\n",iRet);

   float fRet = Add(24.12,10.00);
   printf("Addition is: %f\n",fRet);

   return 0;
}
