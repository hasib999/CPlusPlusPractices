#include <iostream>

using namespace std;
void checkIQ(int a){
    if(a+7 > 170)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main()
{
    int a;
    cout<<"Enter Code Chef IQ: ";
    cin>>a;
    checkIQ(a);
    return 0;
}
