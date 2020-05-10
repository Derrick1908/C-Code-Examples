#include<stdio.h>
#include<conio.h>

void swap_value(int, int);
void swap_reference(int *, int *);

void main()
{
	int a, b;   /*a is name for a memory location*/
	printf("\nEnter the Values of a and b :: ");
	scanf_s("%d %d", &a, &b);

	printf("\n********IN MAIN *************");
	printf("\nThe Values of a and b before Swapping are :: a = %d  b = %d", a, b);
	//swap_value(a,b);           /*Here the values of a and b are sent to the Swap Function */
	swap_reference(&a, &b);     /*Here the address of a and b are sent and not their values*/
	printf("\n********BACK IN MAIN *************");
	printf("\nThe Values of a and b after Swapping are :: a = %d  b = %d", a, b);
	_getch();
}

void swap_value(int x, int y)
{
	int temp;
	printf("\n********IN SWAP Function*************");
	printf("\nThe Values of x and y before Swapping are :: x = %d  y = %d", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("\nThe Values of x and y after Swapping are :: x = %d  y = %d", x, y);

}

void swap_reference(int *x, int *y)
{
	int temp;
	printf("\n********IN SWAP Function*************");
	printf("\nThe Values of x and y before Swapping are :: x = %d  y = %d", *x, *y);
	temp = *x;     /* '*' has to be read as value at */
	*x = *y;
	*y = temp;
	printf("\nThe Values of x and y after Swapping are :: x = %d  y = %d", *x, *y);

}