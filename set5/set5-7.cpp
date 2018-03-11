#include <iostream>

using namespace std;

int main()
{
    int n,k,i,temp1,temp2;
    cout<<"Enter a number:";
    cin>>k;
    for (i=1;i<=k;i++)
    {
    cin>>n;
    if(temp1>n)
        temp1=n;
        else if(temp2<n)
        temp2=n;
    }
    cout<<temp1<<" "<<temp2;
    return 0;
}
