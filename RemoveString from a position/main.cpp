#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;

void removeString(){
    string str;
    int position;
    cout<<"Enter String: ";
    cin>>str;
    cout<<"Enter position number to remove: ";
    cin>>position;
    str.erase(position,position);
    cout<<str;
}
int main()
{
    removeString();
    return 0;
}
