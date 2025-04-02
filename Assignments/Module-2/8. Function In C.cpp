#include<stdio.h>
int factorial(int n);
main()
{
	int num;
	
	printf("Enter a Num:");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Factorial is Not Defined For Negative Numbers!\n");
	}
	
	else
	{
		printf("Factorial of %d is %d\n", num, factorial(num));
	}
}

int factorial(int n)
{
	int fact = 1;
	int i;
	
	for(i=1;i<=n;i++)
	{
		fact *=i;
	}
	return fact;
}

