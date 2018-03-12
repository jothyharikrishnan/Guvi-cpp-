#include <iostream>
using namespace std;

int main()
{
    int n,m,pro;
    cout<<"Enter 2 numbers";
    cin>>n>>m;
    pro=n*m;
    if(pro%2==0)
    cout<<"Even";
    else
    cout<<"ODD";
    return 0;
}
