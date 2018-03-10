#include <iostream>
using namespace std;
int main()
{
    string s;
    int k;
    int i;
    cout<<"Enter The String:"<<endl;
    getline(cin,s);
    cout<<"Enter The Num To Print the string K times:";
    cin>>k;
    for(i=1;i<=k;i++)
    cout<<"\n"<<i<<"."<<s;

    return 0;
}

