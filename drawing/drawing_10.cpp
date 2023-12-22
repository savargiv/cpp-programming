#include <iostream>
using namespace std;
int main()
{
int i, j;
	for(i=1;i<=20;i++) 
	{
		for(j=1;j<=20;j++)
		{
		if((i == j)||(i == 20-j))
			cout << "*";
		else
			cout << " ";
		}
	cout << "\n" ;
	}
return 0;
}


