#include <iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    T temp;

    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    int iCnt = 0;

    Reverse(arr, size);

    printf("Reversed Array: \n");
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        printf("%d\n",arr[iCnt]);
    }

    return 0;
}

