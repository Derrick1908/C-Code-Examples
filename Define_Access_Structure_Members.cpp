#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct student
{
	int id;
	char name[20];
	float percentage;
	
}student;
void DisplayDetails(student);   /*Function declaration*/
int main()
{
	student s1, s2;                     /*Declaration of the Structure Variables*/
	student s3 = { 3, "Devon Smith", 98 };
	
	s1.id = 1;
	strcpy_s(s1.name, "John Smith");
	s1.percentage = 62.5;
	
	printf("\nEnter the Details for Student 2 ::"); /*User Entering the Details into the Structure Variables*/
	printf("\nID/Roll No :: ");
	scanf_s("%d", &s2.id);
	getchar();          /*To Consume the unwanted new line character*/
	printf("\nName :: ");
	gets_s(s2.name, 20);
	printf("\nPercentage :: ");
	scanf_s("%f", &s2.percentage);

	DisplayDetails(s1);      /*Displaying the Details of the Student through a Funtion*/

	printf("\nStudent Details are as follows :: "); 
	printf("\n ID :: %d", s2.id);
	printf("\n Name :: %s", s2.name);
	printf("\n Percentage :: %f", s2.percentage);

	DisplayDetails(s3);

	_getch();
	return 0;
}

void DisplayDetails(student s)
{
	printf("\nStudent Details are as follows :: ");
	printf("\n ID :: %d", s.id);
	printf("\n Name :: %s", s.name);
	printf("\n Percentage :: %f", s.percentage);
}