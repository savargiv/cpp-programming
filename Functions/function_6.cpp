/*
	Factorial using recursive function
*/

#include<iostream>
using namespace std;
int factorial(int a)
{
	if(a == 1)
		return 1;
	else
		return (a * factorial(a-1));
}

int main()
{
	int x;
	cout<<"enter your number:\n";
	cin>>x;
	cout<<"factorial of "<<x<<" is: "<<factorial(x)<<endl;
	
	getchar();
	return 0;
}
	