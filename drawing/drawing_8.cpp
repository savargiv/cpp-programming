#include <iostream>
using namespace std;
int main()
{
int i, j;
	for(i=1;i<=15;i++) 
	{
		for(j=1;j<=15;j++)
		{
		if (i == 15-j)
			cout << "*";
		else
			cout << " ";
		}
	cout << "\n" ;
	}
return 0;
}


