#include<iostream>
using namespace std;

template <class T>

void Reverse(T *arr,int iSize)
{
    int iCnt = 0;
    T temp;

    for(iCnt = 0;iCnt < iSize/2;iCnt++)
    {
        temp = arr[iCnt];
        arr[iCnt] = arr[iSize - iCnt - 1];
        arr[iSize - iCnt - 1] = temp;
    }
}
int main()
{
    int iRet = 0;
    int arr[] = {10,20,30,10,30,40,10,40,10};

   for(int i = 0;i < 9;i++)
   {
    cout<<arr[i]<<"\t";
   }
    cout<<"\n";
   Reverse(arr,9);

   for(int i = 0;i < 9;i++)
   {
    cout<<arr[i]<<"\t";
   }
    return 0;
}