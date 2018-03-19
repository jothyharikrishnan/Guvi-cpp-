#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    float n;
    int i,j,k,m;
    cout<<"Enter The String:";
    cin>>n;
    j=n;
    s=to_string(n);
    for(i=0;i<=s.length();i++)
    { 
        if(s[i]=='.'){
        k=i+1;
        break;
        }
    }
    if(s[k]>='5' &&  s[k]<='9'){
        cout<<j+1;
    }else{
        cout<<j;
    }
    
    return 0;
}
