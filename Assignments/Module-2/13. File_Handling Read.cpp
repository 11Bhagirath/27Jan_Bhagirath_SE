#include<stdio.h>
main()
{
	FILE *myfile;
	char str[100];
	myfile=fopen("temp.txt", "r");
	
	while(fgets(str,100,myfile))
	{
		printf("%s",str);
	}
}
