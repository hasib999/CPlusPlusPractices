#include <iostream>
#include <bits/stdc++.h>
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
int SumOfArrayBuiltInFunction(int arr[],int arrSize){
    return accumulate(arr,arr+arrSize,0);
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
    cout<<"Sum of Array is: "<<SumOfArray(arr,arrSize)<<endl;
    cout<<"Sum of Array using Built in Function: "<<SumOfArrayBuiltInFunction(arr,arrSize);
    return 0;
}
