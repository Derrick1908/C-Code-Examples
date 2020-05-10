#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char original[20], reverse[20];
	int compare;

	printf("\nEnter the String :: ");
	gets_s(original, 20);

	strcpy_s(reverse, original); /*Makes a copy of the Original String*/
	_strrev(reverse);           /*Reverses the String*/
	
	compare = strcmp(original, reverse);

	if (compare == 0)
		printf("\nThe String '%s' is a Palindrome",original);
	else 
		printf("\nThe String '%s' is not a Palindrome", original);
	_getch();

}