#include <iostream>
using namespace std;

int main()
{	
	int m[200];
	int n,i,j;
	int temp;
	
	cout<<"Enter The Num To Read: ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>m[i];
	}

	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(m[i]>m[j])
			{
				temp  =m[i];
				m[i]=m[j];
				m[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		cout<<m[i]<<"\t";
	return 0;
	
}
