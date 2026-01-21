#include <iostream>
using namespace std;

template <class T>
bool Search(T *arr, int iSize,T Value)
{
    int iCnt = 0;

    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == Value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {10, 70, 20, 40};
    int iSize = 4;

    if(Search(arr, iSize,20))
    {
      printf("Element is present\n");
    }
    else
    {
      printf("Element is not present\n");
    }
    return 0;
}
