#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k[20],temp;
    cout<<"Enter N Numbers:";
    cin>>n;
    i=0;
    while(n>0)
    {
        temp=n%10;
        k[i]=temp;
        n/=10;
        i++;
    }
    for(j=i-1;j>=0;j--)
		cout<<k[j]<<" ";
return 0;
}
