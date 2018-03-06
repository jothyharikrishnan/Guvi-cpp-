#include <iostream>
using namespace std;

int main()
{	
	int a[20];
	int n,i,j;
	int temp;
	
	cout<<"Enter The Num To Read: ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
		
	for(i=0;i<n;i++)
	{
		if(n/2==i)
		{
		    cout<<"\nMedian Element Is: "<<a[i];
		    
		}
	}	
	return 0;
	
}
