#include <iostream>

using namespace std;

int main()
{
char n;
	cout<<"Enter The Char:";
	cin>>n;
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
	{
		cout<<"\n"<<n<<" Is Vowels.";
		
	}
	else if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
	{
		cout<<"\n"<<n<<" Is Vowels.";
		
	}
	else if(n>=1 && n<=100)
	{
		cout<<"\nInvalid Input.";
	}
	else 
	{
		cout<<"\n"<<n<<" Is Const.";
}
   return 0;
}
	
