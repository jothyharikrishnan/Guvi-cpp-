#include<iostream>
using namespace std;

int main()
{
int time = 0;
int minutes = 0; 
int hours = 0;

cout<<"\nEnter The Time:";
cin>>time;
minutes = time % 60; 
hours = (time - minutes) / 60; 
cout<<hours <<" hours and "<< minutes<<" minutes"; 
return 0;
}
