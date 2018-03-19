#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    int i;
    cout<<"Enter The Num:";
    cin>>a;
    for(i=1;i<=a;i++)
    if(a%i==0)
    cout<<i<<" ";
    return 0;
}
