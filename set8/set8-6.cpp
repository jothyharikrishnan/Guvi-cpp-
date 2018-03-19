#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
  int n;
  int set = 1,res;
 
  cout << "Enter a positive number: "; 
  cin >> n;
 res=sqrt(n);

  for(int i = 2; i <= res; ++i)
  {
      if(n % i == 0)
      {
          set = 0;
          break;
      }
  }
  if (set == 0)
      cout <<" YES";
  else
      cout <<" NO";
 
  return 0;
}
