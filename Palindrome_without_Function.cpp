#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char original[20], reverse[20];
	int compare, i = 0, j = 0, count = 0, check = 1;

	printf("\nEnter the String :: ");
	gets_s(original, 20);
	
	//printf("%d", strlen(original));
	while (original[i] != '\0')      /*Counts the Number of Characters in the String*/
	{
		i++;
		count++;
	}
	
	for (i = 0, j = count - 1; i < count; i++, j--) /*Reverses the String*/
		reverse[j] = original[i];
	reverse[count] = '\0';          /*Adding the End of String Character*/

	for(i=0;i<count;i++)
		if (reverse[i] != original[i])
		{
			check = 0;
			break;
		}

	if (check)
		printf("\nThe String '%s' is a Palindrome", original);
	else
		printf("\nThe String '%s' is not a Palindrome", original);
	_getch();

}