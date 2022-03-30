#include <iostream>

using namespace std;

int singleNumber(int arr[],int arrSize){
    int result = arr[0];
    for(int i=1;i<arrSize;i++)
    {
        result = result ^ arr[i];
    }
    return result;
}
int main()
{
    int arr[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout<<singleNumber(arr,arrSize);
    return 0;
}
