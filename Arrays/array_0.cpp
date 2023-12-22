#include<iostream>
using namespace std;
int main()
{
	int a[5];
	
	a[0] = 3;
	a[1] = 4;
	a[2] = 2;
	a[3] = -6;
	a[4] = 7;
	
	cout<<"Matrix a is:\n";
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
	cout<<a[4]<<endl;
	
//***********************************************
	int b[5] = {3,4,7,-3,1};
	cout<<"Matrix b is:\n";
	for(int i=0 ; i<5 ; i++)
		cout<<b[i]<<" ";
	
	
	getchar();
	return 0;
}
;
