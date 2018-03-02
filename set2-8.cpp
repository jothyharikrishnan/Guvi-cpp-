#include<iostream>
using namespace std;

int main()
{
	int n,m,d1,d2,d3;
	cout<<"ENTER";
	cin>>n>>m;

	for(int i=n;i<=m;i++)
	{
		d1=i/100;
		d2=i/10 - d1*10;
		d3=i%10;

		if(d1*d1*d1 + d2*d2*d2 + d3*d3*d3 == i)
			cout<<i<<endl;
	}

	
	return 0;
}
 
