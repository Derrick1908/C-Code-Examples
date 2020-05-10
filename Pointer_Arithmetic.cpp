#include <stdio.h>
#include <conio.h>
int main() {

	int  a, b, *p, *q, sum;
	printf("Enter the Values of the two numbers :: ");
	scanf_s("%d %d", &a, &b);
	p = &a;
	q = &b;
	sum = *p + *q;
	
	printf("\nThe Sum of the two Numbers using Pointer is : %d", sum);
	_getch();
	return 0;
}