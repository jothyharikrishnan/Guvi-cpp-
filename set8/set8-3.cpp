#include <iostream>

using namespace std;

int main()
{
int n,i,l,r;
int set=0;
cout<<"Enter Num N:";
cin>>n;
cout<<"Enter L and R";
cin>>l>>r;
for(i=l;i<=r;i++)
if(n>l && n<r)
set=1;
    if(set)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
