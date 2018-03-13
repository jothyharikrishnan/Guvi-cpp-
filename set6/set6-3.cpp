#include <iostream>
using namespace std;

int main()
{
    int n,a[20],temp,i,sum=0;
    cout<<"Enter a number";
    cin>>n;
    i=0;
    while(n>0)
    {
    temp=n%10;
    a[i]=temp;
    n/=10;
    sum+=a[i];
    }
    cout<<sum;
    return 0;
}
