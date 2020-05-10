#include<stdio.h>
#include<conio.h>
int largest(int *, int);
void main()
{
	int i, no_terms, a[10];
	printf("Enter the Number of Elements of the Array :: ");
	scanf_s("%d", &no_terms);
	printf("\nEnter the Elements of the Array :: ");
	for (i = 0; i < no_terms; i++)
		scanf_s("%d", &a[i]);

	printf("\nThe Largest Element of the Array is :: %d ", largest(a, no_terms));
	_getch();
}
int largest(int *g, int n)
{
	int max = *g, i;
	for (i = 1; i < n; i++)
		if (*(g + i) > max)
			max = *(g + i);
	return max;
}