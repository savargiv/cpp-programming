//Four basic mathematical operations using functions.
#include <iostream>
using namespace std;

float Add(float a, float b);
float Sub(float c, float d);
float Mul(float e, float f);
float Div(float g, float h);
void message();

int main()
	{
	float a, b;
	cout<<"enter your digits: "<<endl;
	cin>>a>>b;
	cout<<"SUM = "<<Add(a,b)<<endl;
	cout<<"SUB = "<<Sub(a,b)<<endl;
	cout<<"MUL = "<<Mul(a,b)<<endl;
	if (b==0)
		message();
	else
		cout<<"DIV = "<<Div(a,b)<<endl;
	
	getchar();
	return 0;
	}
	
void message()
{
	cout<<"Division by Zero!\n";
}

float Add(float a, float b)
{
	float sum;
	sum = a+b;
	return sum;
}
float Sub(float c, float d)
{
	float subt;
	subt = c-d;
	return subt;
}

float Mul(float e, float f)
{
	float mult;
	mult = e*f;
	return mult;
}

float Div(float g, float h)
{
	float div;
	div = g/h;
	return div;
}


