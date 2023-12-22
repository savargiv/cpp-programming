#include<iostream>	
using namespace std;
int main()
{
//   	Initialization of two-dimensional matrices
	int a[3][4] = {1,1,1,1,2,2,2,2,3,3,3,3};		
	cout<<"Matrix A is:\n";
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
//***********************************************
	int b[3][4] = {{1,1,1,1},{2,2,2,2}, {3,3,3,3}};		
	cout<<"\n=========================\n";
	cout<<"Martix B is:\n";
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
			cout<<b[i][j]<<"\t";
		cout<<endl;
	}
//***********************************************
	int c[3][4] = {{1},{2,2}, {3,3,3}};		
	cout<<"\n=========================\n";
	cout<<"Martix C is:\n";
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
			cout<<c[i][j]<<"\t";
		cout<<endl;
	}

	getchar();
	return 0;
}

