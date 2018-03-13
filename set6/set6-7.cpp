#include <iostream>

using namespace std;

int main()
{
    int n,m,temp;;
    cout<<"Enter 2 Num:";
    cin>>n>>m;
    temp=n;
    n=m;
    m=temp;
    cout<<n<<" "<<m;
    
    return 0;
}
