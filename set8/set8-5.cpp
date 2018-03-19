#include <iostream>
using namespace std;
int main()
{
  string s;
  int n,m;
  cout<<"name:";
  cin>>s;
  n=s.length();
  m=n/2;
  if(n%2==0)
   {       
       s[m-1]='*';
       s[m]='*';
       cout<<s;   
      
    }
  else
    {
      s[m]='*';
      cout<<s;
    }
      return 0;
}
