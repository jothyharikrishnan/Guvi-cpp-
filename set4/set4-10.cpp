#include <iostream>

using namespace std;

int main()
{
    int n,i,f1,f2,f3;
    f1=f2=1;
    
    cout<<"Enter a number:"<<endl;
    cin>>n;
    cout<<"The fibonacci series of "<<n<<" numbers is:";
    cout<<f1<<" "<<f2;
    for (i=3;i<=n;i++)
    {
        f3=f1+f2;
        cout<<" "<<f3;
        f1=f2;
        f2=f3;
    }
    
    return 0;
}
