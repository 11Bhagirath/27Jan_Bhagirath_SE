#include<stdio.h>
main()
{
	int i=1;
	for(i=1;i<=10;i++)
	{
		if(i==3)
		{
			continue;
		}
		
		if(i==5)
		{
			break;
		}
		printf("\n%d",i);	
	}
}
