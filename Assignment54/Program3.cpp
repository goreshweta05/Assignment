
#include <iostream>
using namespace std;

template <class T>
T SumOdd(T *arr, int iSize)
{
    T sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] % 2 != 0)
        {
            sum = sum + arr[iCnt];
        }
    }
    return sum;
}

int main()
{
    int arr[] = {10, 21, 30, 41};
    int size = 4;
    int iRet = 0;

    iRet = SumOdd(arr,size);
    printf("Sum of odd numbers are: %d\n",iRet);
    
    return 0;
}
