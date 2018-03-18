#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    int i,set=0;
    cout<<"Enter The String";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    if(s[i]!=s[s.length()-i-1])
    set=1;
    if(set)
    cout<<"No";
    else
    cout<<"yes";
    return 0;
}
