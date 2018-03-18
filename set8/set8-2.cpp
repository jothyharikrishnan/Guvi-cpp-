
#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    int i,set=0;
    cout<<"Enter The String";
    getline(cin,s);
    for(i=0;i<s[i]!='\0';i++)
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]== 'u' || s[i]=='U')
        set=1;
    if(set)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
