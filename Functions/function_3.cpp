/*
	Count the number of digits of a number, 
	using the function.
*/

#include <iostream>
using namespace std;
int count(int);
int main()
	{
	int n;
	cout<<"enter your digit:\n";
	cin>>n;
	cout<<"the count is:\n"<<count(n);
	return 0;
	}
	
int count(int m)
{
	int i=0;
	while(m>0)
		{
		i=i+1;
		m/=10;
		}
	return i;
}
