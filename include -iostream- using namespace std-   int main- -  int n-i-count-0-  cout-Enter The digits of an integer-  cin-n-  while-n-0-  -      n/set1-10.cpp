#include <iostream>
using namespace std;
 
int main()
{
 int n,i,count=0;
 cout<<"Enter The digits of an integer:";
 cin>>n;
 while(n!=0)
 {
     n/=10;
     ++count;
     
 }
 cout<<"\nNumber of Count is :"<<count;
}
