#include <iostream>

using namespace std;

int SumOfArray(int arr[],int arrSize)
{
    int sum = 0;
    for(int i = 0;i<arrSize;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}
int main()
{
    int arrSize,i;
    cout<<"Enter Array Size: ";
    cin>>arrSize;
    int arr[arrSize];
    cout<<"Enter Array: ";
    for(i=0;i<arrSize;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of Array is: "<<SumOfArray(arr,arrSize);
    return 0;
}
