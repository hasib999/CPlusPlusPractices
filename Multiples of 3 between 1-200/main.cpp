#include <iostream>

using namespace std;

void printFunction(){
    int n1,n2,n3;
    cout<<"Enter First Number ";
    cin>>n1;
    cout<<"Enter Last Number ";
    cin>>n2;
    cout<<"Enter Multiples Number ";
    cin>>n3;
    for(int i=n1;i<=n2;i++)
    {
        if(i%n3==0){
            cout<<i<<endl;
        }
    }
}

int main()
{
    printFunction();
    return 0;
}
