// Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading

#include<iostream>
using namespace std;

class calculator

{
	public:
		
		void v1(int a,int b)
		{
			cout<<"two number of addition is :"<<a+b<<endl;
			cout<<"two number of subtraction is :"<<a-b<<endl;
			cout<<"two number of division is :"<<a/b<<endl;
			cout<<"two number of muliplication is :"<<a*b<<endl;
		}
		
		void v2(int a,int b,int c)
		{
			cout<<"three number of addition is :"<<a+b+c<<endl;
			cout<<"three number of subtraction is :"<<a-b-c<<endl;
			cout<<"three number of muliplicationis :"<<a*b*c<<endl;
		}
};

int main()
{
	calculator obj1;
	obj1.v1(10,20);
	obj1.v2(10,20,30);
	return 0;
}
