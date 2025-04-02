#include<stdio.h>
main()
{
	FILE *myfile;
	myfile=fopen("temp.txt","w");//File Creating
	printf("File Is Created!");
	printf("\nMy Name Is BHAGIRATH");
	fprintf(myfile,"\nMy Name Is BHAGIRATH");
}
