#include <iostream>
using namespace std;

int main()
{
    string s1;
    string s2;
    int set=0;
    cout<<"Enter The String1:"<<endl;
    cin>>s1;
    cout<<"Enter The String2:"<<endl;
    cin>>s2;
        if(s1>s2)
        cout<<s1;
        else if(s1==s2)
        cout<<"same";
        else
        cout<<s2;
   
    return 0;
}
