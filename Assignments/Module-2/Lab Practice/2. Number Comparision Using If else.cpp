#include<stdio.h>
main()
{
	int a,b,c, large, small;
	
	printf("Enter Three Numbers:");
	scanf("%d %d %d",&a, &b, &c);
	
	if(a>=b && a>=c)
	{
		large=a;
	}
	
	else if (b>=a && b>=c)
	{
		large=b;
	}
	
	else
	{
		large=c;
	}
	
	if(a<=b && a<=c)
	{
		small=a;
	}
	
	else if (b<=a && b<=c)
	{
		small=b;
	}
	
	else
	{
		small=c;
	}
	
	printf("Largest Number:%d\n",large);
	printf("Smallest Number:%d\n",small);
}
