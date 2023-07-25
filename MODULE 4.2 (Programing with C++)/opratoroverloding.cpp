// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class matrix
{
	public:
		int a[5], b[5], c[5];
		int i;
		
		void find()
		{
			cout<<"enter the value of matrix A :"<<endl;
			for(i=0;i<5;i++)
			{
				cin>>a[i];
			}
			cout<<"enter the value of matrix B :"<<endl;
			for(i=1:i<5;i++)
			{
				cin>>b[i];
			}
				void display();
		void operator+();
		};
	
		
		class matrix::operator+()
		{
			for(i=1;i<5;i++)
			{
				c[i]=a[i]+b[i];
			}
		}
		
		void matrix::display()
		{
			cout<<"matrix A:"<<endl;
			for(i=1;i<5;i++)
			{
				cout<<""<<a[i];
			}
		
			cout<<"matrix B:"<<endl;
			for(i=1;i<5;i++)
			{
				cout<<""<<b[i];
			}
			
			cout<<"addition of matrix a&b:"<<endl;
			for(i=0;i<5;i++)
			{
				cout<<""<<c[i];
			}
		}	
		int main()
		{
			matrix obj;
			obj.find();
			 
			+a;
			obj.display(); 
		}
