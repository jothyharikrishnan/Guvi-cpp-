#include <iostream>
using namespace std;

int main()
{
    int n,res;
    cout<<"Enter a number:";
    cin>>n;
    res=(n&(n-1));
    if(res==0)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
