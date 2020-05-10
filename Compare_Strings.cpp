#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char string1[20], string2[20];
	int compare;

	printf("\nEnter the First String :: ");
	gets_s(string1, 20);

	printf("\nEnter the Second String :: ");
	gets_s(string2, 20);

	compare=strcmp(string1,string2);

	if (compare == 0)
		printf("\nBoth the Strings are Equal ");
	else if (compare > 0)
		printf("\n1st String '%s' is greater than the 2nd String '%s' \ni.e. 2nd String is Alphabetically First", string1, string2);
	else 
		printf("\n2nd String '%s' is greater than the 1st String '%s' \ni.e. 1st String is Alphabetically First", string2, string1);
	_getch();

}