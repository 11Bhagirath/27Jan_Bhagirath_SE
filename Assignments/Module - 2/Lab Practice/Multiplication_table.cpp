#include<stdio.h>
main()
{
	int n, range, i=1;
	
	printf("Enter A Number:");
	scanf("%d",&n);
	
	printf("Enter The Range (Up To Which You Want The Table): ");
	scanf   ("%d",&range);
	
	printf("Multiplication Table of %d Up To %d:\n",n,range);
	
	for(i=1;i<=range;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
