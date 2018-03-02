#include <iostream>

using namespace std;

int main()
{
int a;
cout<<"Enter the Year:";
cin>>a;
if(a%400==0)
{
    cout<<"\nLeapYear";
}
else
{
    cout<<"\nNot A LeapYear";
}

}
