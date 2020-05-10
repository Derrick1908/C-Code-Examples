#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct 
{
	int id;
	char name[20];
	float percentage;

}student;
typedef union {
	int id;
	char name[20];
	float percentage;
}str;
void DisplayDetails(student *);
int main()
{
	student s1, s2, *s4;                     /*Declaration of the Structure Variables*/
	
	s4 = &s2;
	s1.id = 1;
	strcpy_s(s1.name, "John Smith");
	s1.percentage = 62.5;

	printf("\nEnter the Details for Student 2 ::"); /*User Entering the Details into the Structure Variables*/
	printf("\nID/Roll No :: ");
	scanf_s("%d", &s4->id);    /*&s2.id*/
	getchar();          /*To Consume the unwanted new line character*/
	printf("Name :: ");
	gets_s(s4->name, 20);     /*s2.name*/
	printf("Percentage :: ");
	scanf_s("%f", &s4->percentage);

	DisplayDetails(&s1);      /*Displaying the Details of the Student through a Funtion*/

	printf("\nStudent Details are as follows :: ");
	printf("\n ID :: %d", s2.id);
	printf("\n Name :: %s", s2.name);
	printf("\n Percentage :: %f", s2.percentage);

	str u1, u2;
	u1.id = 5;
	strcpy_s(u1.name, "John Edgar");
	u1.percentage = 78;
	printf("\n\n\n************* Union Details are as follows :: ***************");
	printf("\n ID :: %d", u1.id);
	printf("\n Name :: %s", u1.name);
	printf("\n Percentage :: %f", u1.percentage);
	printf("\n*******************************************");
	printf("\nSize of the Struture Variable is %d", sizeof(s1));
	printf("\nSize of the Union Variable is %d", sizeof(u1));

	_getch();
	return 0;
}

void DisplayDetails(student *s)
{
	printf("\nStudent Details are as follows :: ");
	printf("\n ID :: %d", s->id);
	printf("\n Name :: %s", s->name);
	printf("\n Percentage :: %f", (*s).percentage);
}