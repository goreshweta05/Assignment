#include <iostream>
using namespace std;

template <class T>
T Swap(T &no1,T &no2)
{
   T temp;

   temp = no1;
   no1 = no2;
   no2 = temp;   
}

int main()
{
   int a = 10,b = 20;
   Swap(a,b);
   printf("After Swapping: a = %d\n",a);
   printf("After swapping: b = %d\n",b);

   float x = 3.2f, y = 2.1f;
   Swap(x,y);
   printf("After Swapping: x = %f\n",x);
   printf("After Swapping: y = %f\n",y);

   return 0;
}
