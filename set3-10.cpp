#include<iostream>
using namespace std;

int main()
{
int minutes;  
int hours; 
int minutes1;  
int hours1; 
int h,m;

cout<<"\nEnter two times in hr:min format :";
cin>>hours>>minutes;
cin>>hours1>>minutes1;
if(hours>hours1 && minutes>minutes1)
{
h=hours-hours1;
m=minutes-minutes1;
}
else
{
h=hours1-hours;
m=minutes1-minutes;
}
cout<<h<<" hours and "<<m<<" minutes"; 
return 0;
}
