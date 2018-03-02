#include<iostream>
using namespace std;

int main()
{
	int n,m,digit1,digit2,digit3;
	cout<<"ENTER";
	cin>>n>>m;

	for(int i=n;i<m;i++)
	{
		digit1=i/100;
		digit2=i/10 - digit1*10;
		digit3=i%10;

		if(digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3 == i)
			cout<<i<<endl;
	}

	
	return 0;
}
 
