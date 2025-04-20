#include<iostream>
using namespace std;
int n1,n2;

void add(int a,int b)
{
	cout<<"\nSum: "<<a+b;
}

void sub(int a,int b)
{
	cout<<"\nSub: "<<a-b;
}

void mul(int a,int b)
{
	cout<<"\nMul: "<<a*b;
}

void div(int a,int b)
{
	cout<<"\ndiv: "<<a/b;
}

main()
{
	
	cout<<"Enter Num1: ";
	cin>>n1;
	
	cout<<"Enter Num2: ";
	cin>>n2;
	
	add(n1,n2);
	sub(n1,n2);
	mul(n1,n2);
	div(n1,n2);
}
