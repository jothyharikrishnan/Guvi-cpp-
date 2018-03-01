#include <iostream>
using namespace std;
 
int main()
{
  int n,i;
  int fact= 1;
 
  cout << "Enter a positive number: "<<endl; 
  cin >> n;
 for(i=1;i<=n;i++)
 {
     fact*=i;
 }
cout<<fact;
 
  return 0;
}
