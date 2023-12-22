#include<iostream>
using namespace std;
int main()
{
//   	2D array
	int a[3][4] = {{1,1,1,1},{2,2,2,2}, {3,3,3,3}};		

	cout<<"your 2D matrix is:\n";
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}

//***********************************************
	getchar();
	return 0;
}

