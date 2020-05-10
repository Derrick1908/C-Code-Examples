#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	int id;
	char name[20];
	float percentage;

}student;

void EnterDetails(student[],int);  /*Function Declaration of the Function to Add Student Details*/
int main()
{
	student s[10];                     /*Declaration of the Structure Variables*/
	int number, i;

	printf("\nEnter the Number of Students :: ");
	scanf_s("%d", &number);

	EnterDetails(s, number); /*Entering the Details of the Students through a Function (Call by Reference)*/
	
	  /*Displaying the Details of the Student through a For Loop*/
	printf("\nStudent Details are as follows :: ");
	for (i = 0; i < number; i++)
	{
		printf("\n************Student No %d :: **********",i+1);
		printf("\n ID :: %d", s[i].id);
		printf("\n Name :: %s", s[i].name);
		printf("\n Percentage :: %f", s[i].percentage);
	}
	
	_getch();
	return 0;
}

void EnterDetails(student s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n**************Enter the Details for Student %d :: ***********",i+1); /*User Entering the Details into the Structure Variables*/
		printf("\nID/Roll No :: ");
		scanf_s("%d", &s[i].id);
		getchar();          /*To Consume the unwanted new line character*/
		printf("Name :: ");
		gets_s(s[i].name, 20);
		printf("Percentage :: ");
		scanf_s("%f", &s[i].percentage);
	}
}