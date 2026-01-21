#include <iostream>
using namespace std;

template <class T>
T SecondMin(T *arr, int iSize)
{
    T min = arr[0];
    T Smin = arr[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < min)
        {
            Smin = min;
            min = arr[iCnt];
        }
        else if(arr[iCnt] < Smin && arr[iCnt] != min)
        {
            Smin = arr[iCnt];
        }
    }
    return Smin;
}

int main()
{
    int arr[] = {10, 5, 30, 20};
    int size = 4,iRet = 0;

    iRet = SecondMin(arr,size);
    printf("Second largest: %d\n",iRet);
    
    return 0;
}
