#include <stdio.h>
#include <conio.h>
int main() {

	int  var1, var2[10];
	int *q, *w;
	q = &var1;
	w = var2;
	printf("Address of var1 variable: %x\n", &var1);
	printf("Address of var2 variable: %x\n", &var2);

	printf("Address of var1 variable using Pointer is : %p\n", q);
	printf("Address of var2 variable using Pointer is : %p\n", w);
	_getch();
	return 0;
}