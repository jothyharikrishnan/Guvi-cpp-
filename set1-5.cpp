#include <iostream>

using namespace std;

int main()
{
int a,b,c;
cout<<"Enter The Num:";
cin>>a>>b>>c;
if(a>b)
    cout<<a<<" Is largest";
    else if(b>c) 
        cout<<b<<" Is largest";
    else
        cout<<c<<" Is largest";
    return 0;
}
