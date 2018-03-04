#include <iostream>
#include<string>
 
using namespace std;
 
int main()
{
int i,temp; 
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        temp=s[i];
        if(temp>='0' && temp<='9')
        {
            cout<<"Yes";
            break;
            
        }
        else
        {
            cout<<"No";
            break;
        }
    }
    return 0;
}
