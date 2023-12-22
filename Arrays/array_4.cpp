#include <iostream>
using namespace std;
int main()
{
//	An array of characters.

	char name[20];
	cout<<"enter your name: \n";
	cin>>name;
	cout<<"welcome "<<name<<" to this program. \n";
	cout<<"The separated letters of your name are:\n";
	for(int i=0 ; name[i] !='\0' ; i++)
		cout<<name[i]<<" ";
			
	return 0;
}
