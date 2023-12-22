#include <iostream>
using namespace std;

/*
	The second form of function definition to
	finding the maximum of two numbers.
*/

int maximum(int, int);
int main()
{ 
	int a, b, max;
	cout<<"enter your digits: ";
	cin>>a>>b;
	cout<<"max is: "<<maximum(a,b);

	getchar();
	return 0;
}

int maximum(int x, int y)
{
	if (x>y)
		return x;
	else
		return y;
}
