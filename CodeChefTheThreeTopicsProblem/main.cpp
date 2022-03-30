#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int d;
    cin>>a>>b>>c>>d;
    if(d==a || d==b || d==c)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
