#include<iostream>
using namespace std;
int main()
{
    long d,n,a1,an;
    float sum;
    cout<<"Enter value of n ";
    cin>>n;
    cout<<"Enter first term ";
    cin>>a1;
    cout<<"Enter difference ";
    cin>>d;
    an=a1+(n-1)*d;
    sum=n*(a1+an)/2.0;
    cout<<endl<<"Sum ="<<sum<<endl;
    return 0;
}
