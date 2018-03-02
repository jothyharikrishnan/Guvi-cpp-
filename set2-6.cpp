#include <iostream>
using namespace std;
 
int main()
{
  int n,m,i;
  int flag;
 
  cout << "Enter a number n and m: "; 
  cin>>n>>m;
 while(n<m)
 {
     flag = 1;
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          flag = 0;
          break;
      }
  }
  if (flag == 1)
      cout <<n;
      ++n;
 }
 
  return 0;
}
