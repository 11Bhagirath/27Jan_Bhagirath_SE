#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	
	char str[100];
	int vowels=0, consonants=0, digits=0, specialchars=0,i;
	
	printf("Enter a String:");
	gets(str);
	
	for(i=0; str[i] != '\0';i++)
	{
		char ch= tolower(str[i]); 
		
		if(ch>='a' && ch<='z')
		{
			if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			{
				vowels++;	
			}
			
			else
			{
				consonants++;
			}
			
		}
		else if(ch>='0' && ch<='9')
		{
			digits++;
		}
		else if(ch !=' ')
		{
			specialchars++;
		}	
	}
	
	printf("Vowels:%d\n ",vowels);
	printf("Consonants:%d\n ",consonants);
	printf("Digits:%d\n ",digits);
	printf("Special Characters:%d\n ",specialchars);
}
