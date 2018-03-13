#include <iostream>

using namespace std;

int main()
{
    string s;
    int i,k=0;
    cout<<"Enter The String:";
    cin>>s;
while(s[i]!=0)
    {
    if(!(s[i]=='0' || s[i]=='1'))
    k=0;
    else 
    k=1;
    i++;
    } 
    if(k==1)
    cout<<"Yes";
    else
    cout<<"No";
    }
