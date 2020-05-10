/*Program to handle mixed data types*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int number, quantity, i;
	float price, value;
		
	fopen_s(&fp, "Inventory.txt", "w");
	printf("*****************Input inventory data*******************\n\n");
	printf("Item_Number || Price || Quantity\n");
	for (i = 1; i <= 3; i++)
	{
		fscanf_s(stdin, "%d%f%d", &number, &price, &quantity);
		//scanf_s("%d%f%d", &number, &price, &quantity);  /* is same as above statement*/
		fprintf(fp, "%d %f %d\n", number, price, quantity);
	}
	fclose(fp);
	
	fprintf(stdout, "\n\n");
	//printf("\n\n");                /* is same as above statement*/

	fopen_s(&fp, "Inventory.txt", "r");

	printf("Item_Number || Price || Quantity || Value\n");
	for (i = 1; i <= 3; i++)
	{
		fscanf_s(fp, "%d%f%d", &number, &price, &quantity);
		value = price*quantity;
		fprintf(stdout, "%d || %f || %d || %f\n", number, price, quantity, value);
	}
	fclose(fp);
	_getch();
}
