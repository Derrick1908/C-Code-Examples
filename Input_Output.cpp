#include<stdio.h>
#include<conio.h>

void main()
{
	char name[20], h[20] = "Have a Nice Day";

	printf("Enter Your Name :: ");
	//scanf_s("%s", name, 20);
	gets_s(name, 20);

	printf("\nHello :: %s", name);
	printf("\n%s", h);
	_getch();

}