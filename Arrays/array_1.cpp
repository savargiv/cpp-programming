#include<iostream>
using namespace std;
int main()
{
//		insert automatically zero in cells
	int a[5]={0}; 
	cout<<"Matrix a is:\n";
	for (int i=0;i<=4;i++)
		cout<<a[i]<<",";
		
//***********************************************

	cout<<"\nMatrix b is:\n";
	int b[5]={3,4}; 
	
	for (int i=0;i<=4;i++)
		cout<<b[i]<<",";

//***********************************************

	cout<<"\nMatrix c is:\n";
	int c[5]; 
	
	for (int i=0;i<=4;i++)
		c[i]=1;
		
	for (int i=0;i<=4;i++)
		cout<<c[i]<<" ";

	
	getchar();
	return 0;
}
