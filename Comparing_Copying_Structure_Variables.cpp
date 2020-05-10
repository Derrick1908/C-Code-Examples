#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	int id;
	char name[20];
	float percentage;

}student;
void DisplayDetails(student);
int main()
{
	student s1, s2;                     /*Declaration of the Structure Variables*/
	int x;

	s1 = { 111,"Rao",72.50 };        /*Initializing the Values of the Structure Variables*/
	s2 = { 222,"Reddy",67.00 };
	
	student s3;
	s3 = s2;          /*Equating one Structure Variable to the other*/

	DisplayDetails(s1);      /*Displaying the Details of the Student through a Funtion*/
	x = ((s2.id == s3.id) && (s2.percentage == s3.percentage) && (strcmp(s2.name, s3.name) == 0)) ? 1 : 0;
	if (x)
	{
		printf("\nStudent 3 is a copy of Student 2 i.e. Both are the same.");
		DisplayDetails(s2);
	}
	else
	{
		printf("\nStudent 3 and Student 2 different entries.");
		DisplayDetails(s2);
		DisplayDetails(s3);
	}
	
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