#include<stdio.h>
void rev(char str[])
{
	int i, len=0;
	char temp;
	
	while(str[len] != '\0')
	{
		len++;
	}
	
	for(i=0,i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len - 1 - i];
		str[len - 1 - i]=temp;
	}			
}

main()
{
	char str[100];
	
	printf("Enter a String: ");
	scanf("%s",&str);
	
	rev(str);
	
	printf("Reversed String: %s\n", str);
}

