#include<stdio.h>
main()
{
	int n, i;
	float sum=0, avg;
	
	printf("Enter The Number Of Element:");
	scanf("%d",&n);
	
	int arr[n];
		
	printf("Enter %d Numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	
	avg=sum/n;
	
	printf("Sum = %.2f\n",sum);
	printf("Average = %.2f\n",avg);
}
