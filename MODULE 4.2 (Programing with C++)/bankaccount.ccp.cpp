// Define a class to represent a bank account. Include the following members: 
//1. Data Member: 
//-Name of the depositor 
//-Account Number 
//-Type of Account 
//-Balance amount in the account 
//
//2. Member Functions 
//-To assign values 
//-To deposited an amount 
//-To withdraw an amount after checking balance 
//-To display name and balance

#include<iostream>
using namespace std;

class datamemnber
{
	public:
		string name;
		int acc_num,bal_amt,depo_amt,withdraw,total_bal;
		
		void getinfo()
		{
			cout<<"name is:"<<endl;
			cin>>name;
			cout<<"account number is:"<<endl;
			cin>>acc_num;
			cout<<"type of account : current account"<<endl;
			cout<<"balance account is :"<<endl;
			cin>>bal_amt;
			cout<<"deposite amount is :"<<endl;
			cin>>depo_amt;
			cout<<"total amount after deposite is:"<<bal_amt+depo_amt<<endl;
			cout<<"withdrow amount is:"<<endl;
			cin>>withdraw;
			cout<<"total balance is:"<<bal_amt+depo_amt-withdraw<<endl;
		}
		
		void setinfo()
		{
			cout<<"\nname is:"<<name<<endl;
			cout<<"account number is:"<<acc_num<<endl;
			cout<<"type of account : current account"<<endl;
			cout<<"balance account is :"<<bal_amt<<endl;
					cout<<"deposite amount is :"<<depo_amt<<endl;
						cout<<"total amount after deposite is:"<<bal_amt+depo_amt<<endl;
				cout<<"withdrow amount is:"<<withdraw<<endl;
					cout<<"total balance is:"<<bal_amt+depo_amt-withdraw<<endl;
		}
		
};
int main()
{
	 datamemnber obj1;
	 obj1.getinfo();
	 obj1.setinfo();
	 return 0;
}
