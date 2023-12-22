#include<iostream>
using namespace std;
int main()
{
// Sum of two 1D array
 
	int i, x[5], y[5], sum[5] = {0};
	cout<<"enter your first array\n";
	for (i=0;i<=4;i++)
	{
		cout<<"enter index "<<i+1<<" : ";
		cin>>x[i];
	}
	
	cout<<"\n___________________________\n";
	cout<<"enter your second array\n";
	for (i=0;i<=4;i++)
	{
		cout<<"enter index "<<i+1<<" : ";
		cin>>y[i];
	}
	
	for (i=0;i<=4;i++)
	{
		sum[i] = x[i] + y[i];
	}
	
	cout<<"\n___________________________\n";
	cout<<"\nAddition of two matrices is :\n";
	for (i=0;i<=4;i++)
		cout<<sum[i]<<",";
//***********************************************

	
	getchar();
	return 0;
}

