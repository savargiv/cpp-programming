//Local and global variables
#include <iostream>
//local & global variables
using namespace std;
int g; // global variable
int F1(int a, int b)
{
	int z;
	z=a+b;
	
	g = 5;
	cout<<"print g from fucntion : "<<g<<endl;
	return z;
}

int main()
{ 
	int a = 3, b = 7, sum;
	g = 10;
	
	cout<<"print g from main : "<<g<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	sum = F1(a,b);
	cout<<"sum is: "<<sum<<endl;
	cout<<"print g from main : "<<g<<endl;
	
	
	getchar();
	return 0;
}

