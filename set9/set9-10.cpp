
#include <iostream>
using namespace std;
int main()
{
string s;
int i=0;
cout << "Enter the alphanumeric string:"<<endl;
getline(cin,s);
while(s[i]!='\0')
{
    if(s[i]>='0' && s[i]<='9')
    cout<<s[i];
    i++;
}
}
