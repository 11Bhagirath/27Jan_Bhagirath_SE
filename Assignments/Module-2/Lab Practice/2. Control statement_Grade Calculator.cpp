#include<stdio.h>
main()
{
	int English, Gujarati, Maths, Science, total;
	float PR;
	printf("Enter English Marks:");
	scanf("%d",&English);
	printf("Enter Gujarati Marks:");
	scanf("%d",&Gujarati);
	printf("Enter Maths Marks:");
	scanf("%d",&Maths);
	printf("Enter Science Marks:");
	scanf("%d",&Science);
	
	
	if(English>=40 && Gujarati>=40 && Maths>=40 && Science>=40)

	{
	
		total=English+Gujarati+Maths+Science;
		printf("\nTotal:%d",total);
	
		PR=total/4;
		printf("\nPR:%.2f",PR);
		
		if(PR>=90)
		{
			printf("\nYour Grade Is A");
		}
		    else if(PR>=75)
		{
			printf("\nYour Grade Is B:");
		}
	
			else if(PR>=50)
		{
			printf("\nYour Grade Is C:");
		}
	
			else if(PR<=50)
		{
			printf("\nYour Grade Is D:");
		}
	}
			else 
		{
			printf("Result:FAIL");	
		}
}
