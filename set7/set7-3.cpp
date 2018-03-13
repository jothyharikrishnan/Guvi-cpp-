
#include <iostream>

using namespace std;

int main()
{
    string s;
    int i,k=0;
    cout<<"Enter The String:";
    getline(cin,s);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]==' ')
     k++;
}
cout<<k+1;
    }
