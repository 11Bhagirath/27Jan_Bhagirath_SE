#include<stdio.h>
main()
{
	int i;
	printf("Enter Any Number:");
	scanf("%d",&i);
	

	if(i%2==0)
	{
		printf("\nNumber Is Even");
	}
	
		else
	{
		printf("\nNumber Is Odd");
	}
	
	if(i>0)
	{
		printf("\nNumber Is POSITIVE");
	}
	
	else if(i==0)
	{
		printf("\nNumber Is ZERO");
	}
	
	else 
	{
		printf("\nNumber Is NEGATIVE");
	}
	
	if(i%3==0 && i%5==0)
	{
		printf("\nThe Number Is Multiple Of 3 & 5");
	}
	
	else
	{
		printf("\nThe Number Is Not Multiple Of 3 & 5");
	}
}
