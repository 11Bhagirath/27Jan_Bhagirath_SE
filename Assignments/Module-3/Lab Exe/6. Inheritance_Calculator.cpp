#include<iostream>
using namespace std;
class calc
{
	public:
	int n1,n2;
	string name;
	
	void getdata()
	{
		cout<<"Enter Number1:";
		cin>>n1;
		
		cout<<"Enter Number2:";
		cin>>n2;
	}
};

class output:public calc//inherit
{
	public:
	void result()
	{	
		int add,sub,mul;
		float div;
		
		add=n1+n2;
		cout<<"\nAdd: "<<add;
		
		sub=n1-n2;
		cout<<"\nSub: "<<sub;
		
		mul=n1*n2;
		cout<<"\nMul: "<<mul;
		
		div=float(n1)/float(n2);
		cout<<"\nDiv: "<<div;
	}	
};

main()
{
	output ot;
	ot.getdata();
	ot.result();
}

