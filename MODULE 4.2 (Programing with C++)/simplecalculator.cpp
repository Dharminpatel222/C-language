
//WAP to create simple calculator using class 

#include<iostream>
using namespace std;

class calculator
{
	public:
		int a,b,add,sub,div,mult,mod;


void getinfo()
{
	cout<<"enter the value of a ="<<endl;
	cin>>a;
	cout<<"enter the value of b ="<<endl;
	cin>>b;
	add= a+b;
	sub= a-b;
	div= a/b;
	mult=a*b;
	mod=a%b;
}
void setinfo()
{
	cout<<"addition is = "<<add<<endl;
	cout<<"subtraction is ="<<sub<<endl;
	cout<<"division is ="<<div<<endl;
	cout<<"multipication is ="<<mult<<endl;
	cout<<"modules is ="<<mod<<endl;
}

};

int main()
{
	calculator obj1;
	obj1.getinfo();
	obj1.setinfo();
	return 0;
}
