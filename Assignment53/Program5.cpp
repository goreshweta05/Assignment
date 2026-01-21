#include <iostream>
using namespace std;

template <class T>
void ReplaceAll(T *arr, int iSize, T oldValue, T newValue)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == oldValue)
        {
            arr[i] = newValue;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 10, 30, 10};
    int size = 5;

    ReplaceAll(arr, size, 10, 99);

    for(int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
