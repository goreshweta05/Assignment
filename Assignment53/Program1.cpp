#include<iostream>
using namespace std;

template <class T>

 void CopyArray(T *src,T *dest,int iSize)
{
    int iCnt = 0;
   for(iCnt = 0;iCnt < iSize;iCnt++)
   {
     dest[iCnt] = src[iCnt];
   }
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    int dest[5];
    int i = 0;
    
    CopyArray(Arr,dest,5);

    printf("Copied Array: ");
    for(i = 0;i < 5;i++)
    {
      printf("%d\t",dest[i]);
    }

    return 0;
}