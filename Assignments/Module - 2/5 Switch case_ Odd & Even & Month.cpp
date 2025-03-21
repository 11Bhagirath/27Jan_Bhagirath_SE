#include<stdio.h>
main()
{
	int n,month;	 	
	
	printf("Enter a Number:");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("Number Is Even");
	}
		else
	{
		printf("Number Is Odd");
	}
	
		printf("\nPlease Enter a Number(To Get Month):");
		scanf("%d",&month);
		
		switch (month)
			{
				case 1:
				printf("\nJanuary:%d",month);
				break;
		
				case 2:
				printf("\nFebuary:%d",month);
				break;
		
				case 3:
				printf("\nMarch:%d",month);
				break;
		
				case 4:
				printf("\nApril:%d",month);
				break;
		
				case 5:
				printf("\nMay:%d",month);
				break;
		
				case 6:
				printf("\nJune:%d",month);
				break;
		
				case 7:
				printf("\nJuly:%d",month);
				break;
		
				case 8:
				printf("\nAugust:%d",month);
				break;
		
				case 9:
				printf("\nSeptember:%d",month);
				break;
		
				case 10:
				printf("\nOctomber:%d",month);
				break;
		
				case 11:
				printf("\nNovember:%d",month);
				break;
		
				case 12:
				printf("\nDecember:%d",month);
				break;
		
		default:
			printf("Invalid Choice! Please Enter Number Between (1-12)");
	}
}
