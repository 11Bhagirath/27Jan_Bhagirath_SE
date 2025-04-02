#include<stdio.h>
int prime(int num)
{
	int i;
	if(num<2) 
	return 0;
	
	for(i=2;i*i<=num;i++)
	{
		if(num%i==0)
		return 0;
	}
	return 1;
}

main()
{
	int n,i;
	
	printf("Enter a Number:");
	scanf("%d",&n);
	
	if(prime(n))
	printf("%d Is A Prime Number.\n",n);
	
	else 
	printf("%d Is Not A Prime Number.\n",n);

	printf("Prime Number Between 1 & %d Are:\n",n);
	for(i=2;i<=n;i++)
	{
		if(prime(i))
		{
			printf("%d ",i);
		}
	}	
	printf("\n");
	return 0;
}
