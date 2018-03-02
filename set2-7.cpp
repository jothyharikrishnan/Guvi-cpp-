#include <iostream>  
using namespace std;  
int main()  
{  
int n,m,sum=0,temp;    
cout<<"Enter the Number";    
cin>>n;    
temp=n;    
while(n>0)    
{    
m=n%10;    
sum=sum+(m*m*m);    
n=n/10;    
}    
if(temp==sum)    
cout<<"Yes";    
else    
cout<<"No";  
return 0;  
}  
