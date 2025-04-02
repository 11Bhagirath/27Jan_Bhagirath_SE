#include<stdio.h>
struct studentinfo
{
	int roll;
	char nm[50];
	float marks;
}st[3];

main()
{
	int i;
	for(i=0;i<3;i++)
	{	
		printf("Enter an Name:");
		scanf("%s", st[i].nm);
	
		printf("\nEnter an Roll Number:");
		scanf("%d",&st[i].roll); 
		
		printf("\nEnter an Marks:");
		scanf("%f",&st[i].marks); 
	}
	  
    
		for(i=0;i<3;i++)
		{
			printf("\n Enter Name:%s",st[i].nm);
			
			printf("\n Enter Roll Number:%d",st[i].roll);
			
			printf("\n Enter Marks:%.2f",st[i].marks);
		}		
}
