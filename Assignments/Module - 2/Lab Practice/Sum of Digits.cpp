#include<stdio.h>
main()
{
	int n, sum=0, reverse=0, digit;
	
	printf("Enter An Integer:");
	scanf("%d",&n);
	
	int original=n;
	
	while(n!=0)
	{
		digit=n%10;
		sum+=digit;
		reverse=reverse*10+digit;
		n/=10;
	}
	printf("Sum Of Digits Of %d = %d\n", original,sum);
	printf("Reversed Number Of %d = %d\n",original,reverse);
}
