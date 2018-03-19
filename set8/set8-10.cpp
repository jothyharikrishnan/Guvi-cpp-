
#include <iostream>
using namespace std;

int main()
{
    int a,n;
    cout<<"Enter The Num:";
    cin>>a;
    while(a!=0)
    {
        n=a%10;
        a/=10;
        if(n%2==1)
        {
        cout<<n<<" "; 
        }    
        }
}
