#include <iostream>

using namespace std;

int main()
{
    int n;
    int large,temp;
    int i;
    cout<<"ENTER THE NUM:";
    cin>>n;
    for(i=1;i<=n;i++)
{
    cin>>temp;
    if(i==1||large<temp)
    large=temp;
   
}
cout<<"The largest is: "<<large;
    return 0;
}



