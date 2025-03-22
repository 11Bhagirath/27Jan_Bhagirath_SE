#include<stdio.h>
main()
{
	int size,i, j,k;
	
	printf("Enter Matrix Size (2 for 2x2, 3 for 3x3):");
	scanf("%d",&size);
	
	int a[3][3], b[3][3], sum[3][3], mul[3][3];
	
	printf("Enter Elements For Matrices A:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	
	printf("Enter Elements For Matrices B:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	
	printf("Sum of Matrices:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			sum[i][j]= a[i][j] + b[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Multiplication of Matrices:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			mul[i][j]=0;
			
			for(k=0;k<size;k++)
			{
				mul[i][j] += a[i][j]*b[k][j];
			}
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
}
