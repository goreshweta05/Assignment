#include <iostream>
using namespace std;

template <class T>
T SecondMax(T *arr, int iSize)
{
    T max = arr[0];
    T Smax = arr[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > max)
        {
            Smax = max;
            max = arr[iCnt];
        }
        else if(arr[iCnt] > Smax && arr[iCnt] != max)
        {
            Smax = arr[iCnt];
        }
    }
    return Smax;
}

int main()
{
    int arr[] = {10, 50, 30, 40};
    int size = 4,iRet = 0;

    iRet = SecondMax(arr,size);
    printf("Second largest: %d\n",iRet);
    
    return 0;
}
