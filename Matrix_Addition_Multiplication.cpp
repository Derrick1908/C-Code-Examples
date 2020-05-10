#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, k, rows1, columns1, rows2, columns2, a[10][10], b[10][10], sum[10][10], product[10][10];
	printf("Enter the Number of Rows & Columns of the 1st Matrix :: ");
	scanf_s("%d %d", &rows1, &columns1);
	printf("\nEnter the Elements of the 1st Matrix :: ");
	for (i = 0; i < rows1; i++)
		for (j = 0; j < columns1; j++)
			scanf_s("%d", &a[i][j]);

	printf("Enter the Number of Rows & Columns of the 2nd Matrix :: ");
	scanf_s("%d %d", &rows2, &columns2);
	printf("\nEnter the Elements of the 2nd Matrix :: ");
	for (i = 0; i < rows2; i++)
		for (j = 0; j < columns2; j++)
			scanf_s("%d", &b[i][j]);
	 
	if ((rows1 == rows2) && (columns1 == columns2))   /* Addition of 2 Matrices */
	{
		for (i = 0; i < columns1; i++)
			for (j = 0; j < rows1; j++)
				sum[i][j] = a[j][i] + b[i][j];

		printf("\nThe Addition of the 2 Matrices yields :: \n");
		for (i = 0; i < columns1; i++)
		{
			for (j = 0; j < rows1; j++)
				printf("%d\t", sum[i][j]);
			printf("\n");
		}
	}
	else
		printf("\n Addition of the 2 Matrices is not possible since their orders are different");
	
	
	if (columns1 == rows2)
	{
		for (i = 0; i < rows1; i++)
			for (j = 0; j < columns2; j++)
			{
				product[i][j] = 0;
				for (k = 0; k < columns1; k++)
					product[i][j] += a[i][k] * b[k][j];

			}

		printf("\nThe Multipication of the 2 Matrices yields :: \n");
		for (i = 0; i < rows1; i++)
		{
			for (j = 0; j < columns2; j++)
				printf("%d\t", product[i][j]);
			printf("\n");
		}
	}
	else
		printf("\n Multiplication of the 2 Matrices is not possible!!!");



	_getch();
}

