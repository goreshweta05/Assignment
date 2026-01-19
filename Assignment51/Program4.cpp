#include<iostream>
using namespace std;

template <class T>

int SearchLast(T *arr,int iSize,T iNo)
{
    int iPos = -1,iCnt = 0;

    for(iCnt = 1;iCnt < iSize;iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iPos = iCnt + 1;
        }
    }
    return iPos;
}
int main()
{
    int iRet = 0;
    int arr[] = {10,20,30,10,30,40,10,40,10};
    iRet = SearchLast(arr,9,40);
    printf("%d",iRet);
    
    return 0;
}