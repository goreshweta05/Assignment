#include <iostream>
using namespace std;

template <class T>
T SumEven(T *arr, int iSize)
{
    T Sum = 0;
    int iCnt = 0;
    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] % 2 == 0)
        {
          Sum = Sum + arr[iCnt];
        }
    }
    return Sum;
}

int main()
{
    int arr[] = {11, 50, 33, 40};
    int size = 4,iRet = 0;

    iRet = SumEven(arr,size);
    printf("Sum of even numbers are: %d\n",iRet);
    
    return 0;
}
