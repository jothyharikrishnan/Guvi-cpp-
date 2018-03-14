#include <iostream>
using namespace std;

int main() 
{
	int n,i;
	cout<<"Enter a number:";
	cin>>n;
	for(i=10;i<1000;i+=10)
	{
	    if(n<i)
	    {
	        cout<<i;
	        break;
	    }
	}
}
