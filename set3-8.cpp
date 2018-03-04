#include <iostream>
 
using namespace std;
 
int main()
{
int i,n,temp[10]; 
cout<<"Enter the num:";
        cin>>n;
        cout<<"Enter " <<n<<" element:";
    for(i=0;i<n;i++)
    {
    
        cin>>temp[i];
        cout<<"\n"<<temp[i]<<"  "<<i;
    }
    
    return 0;
}
