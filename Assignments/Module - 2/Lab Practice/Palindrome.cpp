#include<stdio.h>
int getdata(int num)
{
	
	int original=num, reversed=0, remainder;
	
	while(num>0)
	{
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num/=10;	
	}
	return original==reversed;
}
main()
{
	int num;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	if(getdata(num))
	{
		printf("%d is a Palindrome.\n",num);
	}
	
	else
	{
		printf("%d is not a Palindrome.\n",num);
	}
		
}


