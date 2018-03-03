#include <iostream>

using namespace std;

int main()
{
    int n;
    int small,temp;
    int i;
    cout<<"ENTER THE NUM:";
    cin>>n;
    for(i=1;i<=n;i++)
{
    cin>>temp;
    if(i==1||small>temp)
    small=temp;
   
}
cout<<"The smallest is: "<<small;
    return 0;
}



