#include<stdio.h>
#include<conio.h>

int factorial(int ); /*Recursive Function*/
int factorial_iter(int );

void main()
{
	int num;
	printf("\nEnter the Number :: ");
	scanf_s("%d", &num);

	printf("\nThe Factorial of %d through Recursion is :: %d", num, factorial(num));
	printf("\nThe Factorial of %d through Iteration is :: %d", num, factorial_iter(num));

	_getch();
}

int factorial(int n)           /*Note that a Recursive function has to have an if statement in order to end */
{                              /* otherwise it would go into an infinite loop. No Loop is permitted in a recursive function*/
	if (n == 0)
		return 1;
	else
		return n*factorial(n - 1);
}

int factorial_iter(int n)
{
	int i, fact = 1;

	for (i = n; i >= 1; i--)
		fact = fact * i;
	
	return fact;
}