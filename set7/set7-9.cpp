#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
  int n,m;
  int set = 1,res;
 
  cout << "Enter a positive number: "; 
  cin >> n>>m;
  res=n-m;
  if(res%2==0)
  cout<<"Even";
  else
  cout<<"Odd";
 
  return 0;
}
