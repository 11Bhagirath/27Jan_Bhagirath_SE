#include<stdio.h>
#include<string.h>
#include<ctype.h>

//Function to reverse a string
void reverse(char str[])
{
	int len=strlen(str), i;
	
	for (i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	printf("\n");	
}

//Function to concatenate two string
void concatenate(char str1[], char str2[])
{
	strcat(str1, str2);
	printf("Concatenated String: %s\n",str1);
}

//Function to check if a string is pelindrome 
void palindrome(char str[])
{
	int len=strlen(str);
	int flag=1;
	int i;
	
	for (i=0;i<len/2;i++)
	{
		if (str[i] !=str[len-i-1])
		{
			flag=0;
			break;	
		}	
	}
	
	if(flag)
	printf("The String is Palindrome.\n");
	
	else
	printf("The String is NOT Palindrome.\n");
}

//Function to copy a string
void copy(char str[])
{
	char copy[50];
	strcpy(copy, str);
	printf("Copied String is: %s\n", copy);
}

//Fuction to find the length of a string
void length(char str[])
{
	printf("Length of String: %d\n",strlen(str));
}

//Function to find the frequency of a character in a string
void frequency(char str[], char ch)
{
	int count=0;
	int i;
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		count++;
	}
	printf("Frequency Of Character in String is '%c':%d\n", ch, count);
}

//Function to count vowels & consonants
void countvowels(char str[])
{
	int i;
	int vowels=0, consonants=0;
	char vowelslist[]="aeiouAEIOU";
	
	for(i=0; str[i]!='\0';i++)
	{
		if(isalpha(str[i]))
		{
			if(strchr(vowelslist, str[i])!=NULL)
			vowels++;
			
			else
			consonants++;
		}
	}
	printf("Vowels: %d, Consonants:%d\n",vowels, consonants);
}

//Function to count spaces & digits
void countspaces(char str[])
{
	int i, spaces=0, digits=0;
	
	for(i=0; str[i]!='\0';i++)
	{
		if(isspace(str[i]))
		spaces++;
		
		else if (isdigit(str[i]))
		digits++;
	}
	printf("Spaces:%d, Digits:%d\n", spaces, digits);
}

//Menu
void menu()
{
	while (1)
	{
		printf("1. Reverse The String\n");
		printf("2. Concatenate Two String\n");
		printf("3. Check If The String Is A Palindrome\n");
		printf("4. Copy The String\n");
		printf("5. Find The Length Of The String\n");
		printf("6. Find The Frequency Of A Character In The String\n");
		printf("7. Find Number Of Vowels & Consonants\n");
		printf("8. Find Number Of Blank Spaces & Digits\n");
		printf("9. For EXIT\n");
		
		int choice;
		
		printf("Enter Your Choice (1-9): ");
		scanf("%d",&choice);
		getchar();
		
		char str1[50], str2[50], ch;
		
		switch (choice)
		{
			case 1:
			printf("Enter The String: ");
			gets(str1);
			reverse(str1);
			break;
			
			case 2:
			printf("Enter First String: ");
			gets(str1);
			printf("Enter First String: ");
			gets(str2);
			concatenate(str1,str2);
			break;
			
			case 3:
			printf("Enter The String: ");
			gets(str1);
			palindrome(str1);
			break;
			
			case 4:
			printf("Enter The String: ");
			gets(str1);
			copy(str1);
			break;
			
			case 5:
			printf("Enter The String: ");
			gets(str1);
			length(str1);
			break;
			
			case 6:
			printf("Enter The String: ");
			gets(str1);
			printf("Enter The Character To Find Frequency: ");
			scanf(" %c",&ch);
			frequency(str1,ch);
			break;
			
			case 7:
			printf("Enter The String: ");
			gets(str1);
			countvowels(str1);
			break;
			
			case 8:
			printf("Enter The String: ");
			gets(str1);
			countspaces(str1);
			break;
			
			case 9:
			printf("EXITING PROGRAM. Thank You!\n");
			return;
			
			default:
				printf("INVALID CHOICE! Please Select Number Between(1-9).");
		}
		
		char cont[10];
		printf("\nDo You Want To Continue? (Yes/No): ");
		gets(cont);
		
		if(strcmp(cont, "yes") !=0 && strcmp(cont, "YES") !=0)
		{
			printf("EXITING THE PROGRAM. Thank You!\n");
			break;
		}
	}
}

main()
{
	menu();
}
