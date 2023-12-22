#include<iostream>	
using namespace std;
int main()
{
//	2D Matrix multiplication
	int i, j, k;
	int a[2][4]={{1,1,1,1},{1,1,1,1}};
	int b[4][3]={{2,2,2},{2,2,2},{2,2,2},{2,2,2}};
	int mul[2][3]={0};

	cout<<"A:\n";
	for (i=0; i<2; i++)
		{
		for (j=0; j<4; j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
		}
	cout<<"\n=========================\n";
	cout<<"B:\n";
	for (i=0; i<4; i++)
		{
		for (j=0; j<3; j++)
			cout<<b[i][j]<<"\t";
		cout<<endl;
		}
	cout<<"\n=========================\n";
	cout<<"Multiplication Result:\n";	
	for (i=0; i<2; i++)
		for (j=0; j<3; j++)
			for (k=0; k<4; k++)
            	mul[i][j] += a[i][k] * b[k][j];
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
			cout<<mul[i][j]<<"\t";
		cout<<endl;
	}
//***********************************************
	getchar();
	return 0;
}


