// Assume a class cricketer is declared. Declare a derived class batsman from 
//cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display 
//data. (Single Inheritance) 

#include<iostream>
using namespace std;

class cricketer
{
	public:
		float total_run,innings;
		string name;
		
		void data()
		{
			cout<<"name is : "<<endl;
			cin>>name;
			cout<<"total run is"<<endl;
			cin>>total_run;
			cout<<"total innings is :"<<endl;
			cin>>innings;
		}
};

class batsman:public cricketer
{
	public:
		float best_score,average;
		
		void infor()
		{
			cout<<"best score is:"<<endl;
			cin>>best_score;
		}
		
		void career()
		{
			cout<<"name is = "<<name<<endl;
			cout<<"total runs is = "<<total_run<<endl;
			cout<<"total innings is ="<<innings<<endl;
			cout<<"best score is = "<<best_score<<endl;
			average=total_run/innings;
			cout<<"average is ="<<average<<endl;
		}
		
};

int main()
{
	batsman obj1;
	obj1.data();
	obj1.infor();
	obj1.career();
	return 0;
}

