#include <iostream>
using namespace std;

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    for(int i = 0; i < iSize - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 70, 20, 40};
    int iSize = 4;

    if(CheckSorted(arr, iSize))
    {
      printf("Array is sorted\n");
    }
    else
    {
      printf("Array is not sorted\n");
    }
    return 0;
}
