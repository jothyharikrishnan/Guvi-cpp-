
#include <iostream>
using namespace std;
 
int main()
{
  int n,m;
  cout<<"Enter The n and m:"<<endl;
  cin>>n>>m;
  for(int i=n+1;i<m;i++)
  {
            if(i%2==1)
      {
          cout<<i;
          
      }
  }
 return 0;
}
