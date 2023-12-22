#include<iostream>	
using namespace std;
int main()
{
/*
	Receiving input from the user and 
	storing it in a two-dimensional matrix
*/
	int a[3][4];
	cout<<"Enter the elements of your matrix:\n";
		for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
		{
			cout<<"enter element ["<<i+1<<"]["<<j+1<<"] :";
			cin>>a[i][j];
		}
		
	}
			
	cout<<"\n=========================\n";
	
	cout<<"your Martix is:\n";
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

