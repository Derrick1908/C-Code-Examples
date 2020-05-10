/*Example program for using getw and putw functions*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1, *f2, *f3;
	int number, i;
	printf("Enter the Contents (Numbers) of the DATA file (-1 to Stop) :: \n");
	fopen_s(&f1, "DATA.txt", "w");
	for (i = 1; i <= 30; i++)
	{
		scanf_s("%d", &number);
		if (number == -1)
			break;
		_putw(number, f1);
	}
	fclose(f1);
	fopen_s(&f1, "DATA.txt", "r");
	fopen_s(&f2, "ODD.txt", "w");
	fopen_s(&f3, "EVEN.txt", "w");
	while ((number = _getw(f1)) != EOF)         /* Read from data file*/
	{
		if (number % 2 == 0)
			_putw(number, f3);                 /*Write to even file*/
		else
			_putw(number, f2);                 /*write to odd file*/
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	fopen_s(&f2, "ODD.txt", "r");
	fopen_s(&f3, "EVEN.txt", "r");
	
	printf("\n\nContents of the ODD file\n\n");
	while ((number = _getw(f2)) != EOF)
		printf("%4d ", number);
	
	printf("\n\nContents of the EVEN file\n\n");
	while ((number = _getw(f3)) != EOF)
		printf("%4d ", number);
	
	fclose(f2);
	fclose(f3);
	_getch();
}
