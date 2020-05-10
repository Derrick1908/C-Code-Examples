#include <stdio.h> 
#include<conio.h>

int maximum(int, int); /*Function Declaration*/
void multiply(int f, int g);/*Function Declaration, Here f and g are optional */
void introduction();
int addition(int, int);

int main()
{
	int a, b, c, max;
	printf("\nEnter the Values of a and b :: ");
	scanf_s("%d %d", &a, &b);          
	
	introduction();  /*Function Call*/
	c = addition(a, b);
	printf("\nThe Addition of a and b is :: %d", c);
	max = maximum(a, b); /* Calling above function (Function Call) to find max of 'a' and 'b' */

	printf("\nThe Maximum among the Two Numbers is %d", max);
	multiply(a,b);
	_getch();
	return 0;
}

/* An example function that takes two parameters 'x' and 'y' as input and returns max of two input numbers  */
int maximum(int x, int y)       /*Function Definition*/
{
	if (x > y)					/* Here x and y are called formal parameters */
		return x;              /*Whereas a and b are called actual parameters */
	else
		return y;
}

void multiply(int p, int q)    /*Function Defintion, this can be done in one line. This Function does not return anything */
{
	printf("\nThe Product of a and b is :: %d", p*q);       
}

inline int addition(int r, int s)
{
	return(r + s);
}

void introduction() /*This Fucntion does not receive any parameters/arguments */
{
	printf("Hi\n");
	printf("How have you'll been during this Lockdown");
	/* There is no return statement inside this function, since its return type is void */
}