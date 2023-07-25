
// Write a program of Addition, Subtraction, Division, Multiplication using 
//constructor. 

#include<iostream>
using namespace std;

class calculator
{
	public:
		int add,sub,div,mul,mod;
		int a,b;
		calculator()
{
	cout<<"enter the value of a ="<<endl;
	cin>>a;
	cout<<"enter the value of b ="<<endl;
	cin>>b;
	add= a+b;
	sub= a-b;
	div= a/b;
	mul=a*b;
	mod=a%b;	
}

void setinfo()
{
	cout<<"addition is = "<<add<<endl;
	cout<<"subtraction is ="<<sub<<endl;
	cout<<"division is ="<<div<<endl;
	cout<<"multipication is ="<<mul<<endl;
	cout<<"modules is ="<<mod<<endl;
}
};

int main()
{
	calculator obj1;
	obj1.setinfo();
	return 0;
}
