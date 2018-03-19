#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  float l,b;
  double area;
  cout<<"Enter length(L) and breadth(B):";
  cin>>l>>b;
  area=l*b;
  cout<<area<<setprecision(5);
      return 0;
}
