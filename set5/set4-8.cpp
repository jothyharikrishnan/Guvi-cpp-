#include <iostream>

using namespace std;

int main()
{
    int n,k,i,sum=0;
    cout<<"Enter a number:";
    cin>>k;
    for (i=1;i<=k;i++)
    {
    cin>>n;
        sum+=n;
    }
    cout<<"avg: "<<sum/k;
    return 0;
}
