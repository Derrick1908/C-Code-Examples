#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *fp;      /*File Pointer*/
	char ch,fileName[20],path[50]="D:\\Documents\\";
	
	//printf("Enter the Name of the File :: \n");
	//gets_s(fileName, 20);
	//strcat_s(path, fileName);
	//strcat_s(path, ".txt");
	fopen_s(&fp, "Test.txt", "w");         /*Creating and Opening a File*/
	//fopen_s(&fp, "D:\\Documents\\Test.txt", "w");         /*Creating and Opening a File*/
	//fopen_s(&fp, path, "w");
	if (fp == NULL)                 /*Check to see whether the file has opened successfully*/
	{
		printf("\nFile Creation Error !!!");
		_getch();
		exit(0);              /*Exit from Program*/
	}
	printf("Enter Data to be written into the File :: \n");
	while ((ch = getchar()) != '\n')
		putc(ch, fp); 
	//while ((ch = getchar()) != EOF)       /*EOF is Entered by typing Control-Z*/
	//	putc(ch, fp);
	
	printf("\nData written successfully.");
	fclose(fp);

	fopen_s(&fp, "Test.txt", "r");         /*Re-open the file to read data*/
	//fopen_s(&fp, "D:\\Documents\\Test.txt", "r"); /*Re-open the file to read data*/
	//fopen_s(&fp, path, "r");
	if (fp == NULL)    /*Check to see whether the file has opened successfully*/
	{
		printf("\n Can't Open File !!!");
		_getch();
		exit(0);              /*Exit from Program*/
	}

	printf("\n\nData read from the file (File Contents) is as follows :: \n");
	while ((ch = getc(fp)) != EOF)
		printf("%c",ch);
	
	fclose(fp);
	_getch();
}