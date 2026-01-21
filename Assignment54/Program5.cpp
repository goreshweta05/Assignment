#include <iostream>
using namespace std;

template <class T>
T Min(T *arr,int iSize)
{
    T iMin = arr[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < iMin)
        {
          iMin = arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iArr[] = {11, 50, 33, 40,24};
    float fArr[] = {10.23,89.33,23.34,8.4,20.12};

    int size = 5;
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Min(iArr,size);
    printf("Smallest element is : %d\n",iRet);

    fRet = Min(fArr,size);
    printf("Smallest element is : %f\n",fRet);
    
    return 0;
}
