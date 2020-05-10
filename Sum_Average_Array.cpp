#include<stdio.h>
#include<conio.h>

void main()
{
	int i, no_terms, a[10], sum = 0;
	float average;
	printf("Enter the Number of Elements of the Array :: ");
	scanf_s("%d", &no_terms); /*No of Elements */
	printf("\nEnter the Elements of the Array :: ");
	for (i = 0;i < no_terms;i++)
		scanf_s("%d", &a[i]);
	for (i = 0;i < no_terms;i++)
		sum += a[i];
	average = (float)sum / no_terms;
	printf("\nThe Sum of the Elements of the Array is :: %d", sum);
	printf("\nThe Average of the Elements of the Array is :: %.2f", average);
	_getch();
}

