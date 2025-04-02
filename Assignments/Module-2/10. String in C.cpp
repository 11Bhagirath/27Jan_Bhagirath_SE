#include<stdio.h>
#include<string.h>
main()
{
	char str1[50], str2[50];
	
	printf("Enter Your First String:");
	gets(str1);
	
	printf("Enter Your Second String:");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("\nYour Concatenated String is: ");
	puts(str1);
	
	printf("Length Of Concatenated String is:%lu\n ",strlen(str1));
	
}
