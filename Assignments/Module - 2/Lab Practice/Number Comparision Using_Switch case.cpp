#include<stdio.h>
main()
{
	int a,b,c, choice, large, small;
	
	printf("Enter Three Numbers:");
	scanf("%d %d %d",&a, &b, &c);
	
	printf("1. Find the largest number");
	printf("\n2. Find the smallest number");
	
	printf("\nSelect Your Choice (1-2):");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		if(a>=b && a>=c)
		large=a;
		
		else if(b>=a && b>=c)
		large=b;
	
		else
		large=c;
		
		printf("Largest Number:%d\n",large);
		break;
		
		case 2:
		if(a<=b && a<=c)
		small=a;
		
		else if(b<=a && b<=c)
		small=b;
	
		else
		small=c;
		printf("Smallest Number:%d\n",small);
		break;
		
		default:
			printf("Invalid Choice! Please Enter Number Between (1-2).");
	}
}
