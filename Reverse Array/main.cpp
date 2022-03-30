#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void arrReverse(int arr[],int arrSize)
{
    for(int i=0;i<arrSize;i++)
    {
        reverse(arr,arr+arrSize);
        cout<<" "<<arr[i];
    }
}
int main()
{
    int arrSize;
    cin>>arrSize;
    int arr[arrSize];
    for(int i=0;i<arrSize;i++)
    {
        cin>>arr[i];
    }
    arrReverse(arr,arrSize);
    return 0;
}
