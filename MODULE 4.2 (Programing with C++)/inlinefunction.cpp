
// Write a program to find the multiplication values and the cubic values using 
//inline function 

#include<iostream>
using namespace std;

class line

{
	public:
			float val1;
			float val2;
		inline float mul(float x,float y)
		{
			return (x*y);
		}
		inline float cube(float x)
		{
			return(x*x*x);
		}
		
		
		void getinfo()
		{
			cout<<"enter the value of va1="<<endl;
			cin>>val1;
			
			cout<<"enter the value of val2="<<endl;
			cin>>val2;
		}
		void setinfo()
		{
			cout<<"multiplication is = "<<mul(val1,val2)<<endl;
			cout<<"cube is ="<<cube(val1)<<endl;
		}
};
int main()
{
	line obj1;
	obj1.getinfo();
	obj1.setinfo();
	return 0;
}
