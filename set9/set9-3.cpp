#include <iostream>

using namespace std;

int main()
{
int n,m;
char c;
cout<<"Enter N and ('%' or'/') and then enter M:";
cin>>n>>c>>m;
if(c=='/')
cout<<n/m;
else
cout<<n%m;

    return 0;
}
