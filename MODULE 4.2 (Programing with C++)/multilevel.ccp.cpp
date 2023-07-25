// Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the marks 
//obtained in two subjects and class result contains the total marks obtained in 
//the test. The class result can inherit the details of the marks obtained in the 
//test and roll number of students. (Multilevel Inheritance) 

#include<iostream>
using namespace std;

class student
{
	public:
		string name;
		int roll_number;
		
		void information()
		{
			cout<<"name is="<<endl;
			cin>>name;
			cout<<"roll number"<<endl;
			cin>>roll_number;
		}
};

class test:public student
{
	public:
		int english_marks;
		int maths_marks;
		
		void data()
		{
			cout<<"english marks is="<<endl;
			cin>>english_marks;
			cout<<"maths marks"<<endl;
			cin>>maths_marks;
		}
};

class results:public test
{
	public:
		int result;
		
		void info()
		{
			result=english_marks+maths_marks;
			cout<<"name is="<<name<<endl;
			cout<<"roll number="<<roll_number<<endl;
			cout<<"english marks is="<<english_marks<<endl;
			cout<<"maths marks"<<maths_marks<<endl;
			cout<<"results is = "<<result<<endl;
			
		}
};
int main()
{
	results obj1;
	obj1.information();
	obj1.data();
	obj1.info();
}
