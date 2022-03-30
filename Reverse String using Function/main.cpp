#include <iostream>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

string reverseString()
{
    char str[50] = "Hasib Shanto";
    cout<<strrev(str);
}
int main()
{
    string s ="My Name Is";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    reverseString();
    return 0;
}
