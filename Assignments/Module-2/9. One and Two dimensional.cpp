#include<stdio.h>
main()
{
	int n[5]={10,50,115,95,11};
	
	printf("\nOne Dimensional Array:");
	for (int i=0;i<5;i++)
	{
		printf("\n%d",n[i]);
	}
	printf("\n\n");
	
	int matrix[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	int sum=0;
	
	printf("Two Dimensional Array (3*3 Matrix):\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",matrix[i][j]);
			sum+=matrix[i][j];
		}
		printf("\n");
	}	
	printf("\nSum of (3*3) Matrix is:%d",sum);
}
