#include<iostream>
using namespace std;
int main()
{
//		Sorting an unsorted array.
	int a[10]={4,9,3,2,0,12,-6,8,14,-1}; 
	int temp;
	cout<<"Unsorted Array: :\n";
	for (int i=0;i<10;i++)
		cout<<a[i]<<" ";	
//***********************************************
	cout<<"\n___________________________\n";
	
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
			if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
	}
	
	cout<<"Your sorted array is:\n";
	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";

	
	getchar();
	return 0;
}

