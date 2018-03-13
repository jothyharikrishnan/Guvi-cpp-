#include <iostream>
using namespace std;

int main()
{
    string s;
    int i,set=0,set1=0;
    cout<<"Enter The String:";
    cin>>s;
    while(s[i]!='\0')
    {
    
if(s[i]>='a' && s[i]<='z')
    set=1;
else if(s[i]>='0' && s[i]<='9')
set1=1;
else
break;
i++;
    }
    if(set==1 && set1==1)
    cout<<"yes";
    else
    cout<<"No";
}

