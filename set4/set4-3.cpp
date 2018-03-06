#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cout<<"Enter The String:";
    getline(cin,s);
    int count=0,i;
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]==' ')
        {
           count++; 
        }
  
}
cout<<count;
    return 0;
}
