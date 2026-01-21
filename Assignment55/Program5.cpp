#include<iostream>
using namespace std;

template <class T>

T Max(T a,T b,T c,T d)
{
  T iMax;

  iMax = a;
  
  if(b > iMax)
  {
    iMax = b;
  }
  if(c > iMax)
  {
    iMax = c;
  }
  if(d > iMax)
  {
    iMax = d;
  }
  return iMax;
}
int main()
{
   int iRet = Max(10,20,50,35);
   printf("Max number is: %d\n",iRet);

   float fRet = Max(34.23f,20.26f,70.46f,35.67f);
   printf("Max number is: %f\n",fRet);

    return 0;
}


   

   
