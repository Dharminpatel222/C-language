// Create a class person having members name and age. Derive a class student 
//having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. 
//Write also Main function (Multiple Inheritance) 

#include<iostream>
using namespace std;

class person
{
	public:
	string name;
	int age;
	
	void information()
	{
		cout<<"name is ="<<endl;
		cin>>name;
		cout<<"age is ="<<endl;
		cin>>age;
	
	}	
};

class student

{
	public:
		int percentage;
		
		void data()
		{
			cout<<"percentage = "<<endl;
			cin>>percentage;
			
		}
};


class teacher:public person,public student
{
	public:
		int salary;
		
		void display()
		{
		cout<<"salary is ="<<endl;
		cin>>salary;
		
		}
		
		void info()
		{
				
		    cout<<"name is ="<<name<<endl;
	     	cout<<"age is ="<<age<<endl;
			cout<<"percentage is"<<percentage<<endl;
			cout<<"salary is ="<<salary<<endl;	
		}
};

int main()
{
	teacher obj1;
	obj1.information();
	obj1.data();
	obj1.display();
	obj1.info();
	return 0;
}
