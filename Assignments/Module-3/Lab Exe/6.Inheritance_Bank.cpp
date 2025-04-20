#include<iostream>
#include<cstdlib>
using namespace std;

class accop
{
	public:
	int nl,balance,wrupees,drupees;
	
	string name,type;
	
	void getdata()
	{
		cout<<"Enter Account Number: ";
		cin>> nl;
		
		cin.ignore();
		
		cout<<"Enter Your Name: ";
		getline(cin,name);
		
		cout<<"Enter Type Of Account (Saving Or Current): ";
		cin>>type;
	}
};

class deposite:public accop
{
	public:
//	int drupees;
	
	void value()
	{
		cout<<"Enter Deposite Value (Minimum Value 2000): ";
		cin>>drupees;
		
		if(drupees<2000)
		{
			cout<<"Minimum Deposite Amount Should Be 2000Rs.";
			exit(0);
		}
	}	
};

class withdrawal:public deposite
{
	public:
		
	//int balance,wrupees;
	
	void withdraw()
	{
		cout<<"Enter Withdrwal Amount: ";
		cin>>wrupees;
		
		if (wrupees>drupees) 
		{
            cout <<"INSUFFICIENT BALANCE! Withdrawal not allowed.\n";
            exit(0);
        } 
		
            balance = drupees - wrupees;
	}
};

class information:public withdrawal
{
	public:
		
	void printdata()
	{
		cout<<"\n-----------Account Details-----------";
		
		cout<<"\nAccount Type: "<<type;
		
		cout<<"\nAccount Number: "<<nl;
		
		cout<<"\nAccount Holder Name: "<<name;
		
		cout<<"\nDeposited Amount: "<<drupees;
		
		cout<<"\nWithdrawal Amount: "<<wrupees;
		
		cout<<"\nBalance: "<<balance;
	}
};

main()
{
	information it;
	it.getdata();
	it.value();
	it.withdraw();
	it.printdata();	
}
