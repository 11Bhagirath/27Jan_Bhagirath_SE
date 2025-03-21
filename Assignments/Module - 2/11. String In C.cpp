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
	
	printf("\nConcatenated String: %s\n",str1);
	printf("Length Of Concatenated String: %d\n",strlen(str1));
}
