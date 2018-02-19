#include <iostream>

using namespace std;

int main()
{
    char n;
    cout<<"\nEnter The Char";
    cin>>n;
    if((n>='a' && n<='z')||(n>='A' && n<='Z'))
    {
        cout<<"\nAlphabet";
    }
    else
    {
        cout<<"\nNo";
    }
    return 0;
}
