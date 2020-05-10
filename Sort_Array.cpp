#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, no_terms, a[10], temp;
	
	printf("Enter the Number of Elements of the Array :: ");
	scanf_s("%d", &no_terms);
	printf("\nEnter the Elements of the Array :: ");
	for (i = 0;i < no_terms;i++)
		scanf_s("%d", &a[i]);
	for (i = 0;i < no_terms-1;i++)
		for (j = 0;j < no_terms - 1 - i;j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	
	printf("\nThe Elements of the Array afte Sorting are :: \n");
	for (i = 0;i < no_terms;i++)
		printf("%d\t", a[i]);

	_getch();
}

