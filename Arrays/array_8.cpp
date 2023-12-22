#include<iostream>	
using namespace std;
int main()
{
//		Sum of two 2D arrays
	int a[3][4]= {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int b[3][4]= {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	int sum[3][4]={0};
	
	for (int i=0; i<3; i++)
		for (int j=0; j<4; j++)
			sum[i][j] = a[i][j] + b[i][j];
	
	cout<<"sum of two 2D array: \n";
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
			cout<<sum[i][j]<<"\t";
		cout<<endl;
	}
//***********************************************
	getchar();
	return 0;
}


