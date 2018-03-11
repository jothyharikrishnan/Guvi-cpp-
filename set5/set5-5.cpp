#include <iostream>

using namespace std;

int main()
{
    int n,i=0;
    cout<<"Enter a num:";
    cin>>n;
    while(n!=0)
    {
        n/=10;
        i++;
    }
    cout<<i;
    return 0;
}
