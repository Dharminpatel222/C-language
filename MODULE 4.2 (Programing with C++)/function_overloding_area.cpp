//? Write a program to calculate the area of circle, rectangle and triangle using 
//Function Overloading 
//? Rectangle: Area * breadth 
//? Triangle: ½ *Area* breadth 
//? Circle: Pi * Area *Area

#include<iostream>
using namespace std;

void v1(int a,int b)
{
	cout<<"area of rectangle = "<<a*b<<endl;
}
void v2(float x,float area,float breadth)
{
	cout<<"area of tringle is ="<<x*area*breadth<<endl;
}
void v3(float r)
{
	cout<<"area of circle is ="<<3.14*r*r<<endl;
}
int main()
{
	v1(10,20);
	v2(0.5,10,20);
	v3(2);
	return 0;
}
