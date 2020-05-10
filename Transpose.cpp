#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, rows, columns, a[10][10], b[10][10];
	printf("Enter the Number of Rows & Columns of the Matrix :: ");
	scanf_s("%d %d", &rows, &columns);
	printf("\nEnter the Elements of the Matrix :: ");
	for (i = 0;i < rows;i++)      /*Accepting the Values*/
		for (j = 0;j < columns;j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0;i < columns;i++)   /*Transpose*/
		for (j = 0;j < rows;j++)
			b[i][j] = a[j][i];
	printf("\nThe Transpose of the Matrix is :: \n");
	for (i = 0;i < columns;i++)
	{
		for (j = 0;j < rows;j++)
			printf("%d\t", b[i][j]);
		printf("\n");
	}
	_getch();
}

