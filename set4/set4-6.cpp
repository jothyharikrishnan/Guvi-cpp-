#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter The String:";
    getline(cin,s);
    int count=0,i;
 while(s[i]!=0)
 {
 if(!((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')))
		{
			count++;
		}
		i++;
 }
 cout<<count;
    return 0;
}
