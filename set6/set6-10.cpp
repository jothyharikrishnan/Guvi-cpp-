#include <iostream>

using namespace std;

int main()
{
    int a,j,f1,f2,f3;
    f1=f2=1;
    
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout<<"The fibonacci series of "<<a<<" numbers is:";
    cout<<f1<<" "<<f2;
    for (j=3;j<=a;j++)
    {
        f3=f1+f2;
        cout<<" "<<f3;
        f1=f2;
        f2=f3;
    }
    
    return 0;
}
