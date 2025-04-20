#include<iostream>
using namespace std;
void table()
{
	int n,i,mul;
	
	cout<<"Enter Any Number: ";
	cin>>n;
	
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		cout<<n<<"*"<<i<<"="<<mul<<"\n";
	}	
}

main()
{
	table();
}
