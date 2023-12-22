#include<iostream>
#include<string>
using namespace std;
int main(){
//	Array of String
	string person[2];
	
	cout<<"enter your name :";
	cin>>person[0];
	
	cout<<"enter your Family :";
	cin>>person[1];
	
	cout<<"\n___________________________\n";
	cout<<"welcome "<<person[0]<<"  "<<person[1]<<endl;

	
	getchar();
	return 0;
}
