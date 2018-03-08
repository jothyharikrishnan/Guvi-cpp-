#include <iostream>

using namespace std;

int main()
{
    int n,i,temp;
    cout<<"Enter any 10 numbers:";
    for (i=1;i<=10;i++)
    {
    cin>>n;
    if(temp<n)
    {
        temp=n;
    }
    }
    cout<<temp;
    return 0;
}
