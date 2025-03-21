#include<stdio.h>
main()
{
	int num1, num2, add, sub, mul;
	char choice;
	float div;
	
	printf("Enter Num1:");
	scanf("%d",&num1);
	
	printf("Enter Num2:");
	scanf("%d",&num2);
	
	printf("Enter Choice:");
	scanf(" %c",&choice);
	
	
		if (choice=='+')
		{
			add=num1+num2;
			printf("\nAdd is:%d",add);
		}
		
		else if (choice=='-')
		{
			sub=num1-num2;
			printf("\nSub is:%d",sub);
		}
		
		else if (choice=='/')
		{
			mul=num1*num2;
			printf("\nSub is:%d",mul);
		}
		
		else if (choice==4)
		{
			div=float(num1)/float(num2);
			printf("\nDiv is:%.2f",div);
		}
	
	else
	{
		printf("Invalid Choice! Please Select Between(1-4)");
	}
}
