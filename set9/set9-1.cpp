#include <iostream>
using namespace std;
int main()
{
  int n,m,res;
  cout<<"Enter n and m:";
  cin>>n>>m;
  if(n>m)
  {
      res=n-m;
      cout<<res;
  }
  else
  {
      res=m-n;
      cout<<res;
  }
      return 0;
}
