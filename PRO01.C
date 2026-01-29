#include<stdio.h>
#include<conio.h>
void main()
{
char name[10][30];
int i;
clrscr();

printf("enter names of 10 student ");

	for(i=0;i<10;i++)
	{
	  printf("\nstudent %d:- ",i+1);
	  scanf("%s",name[i]);
	}
printf("\n	 list of students:\n");
       for(i=0;i<10;i++)
	{
	  printf("student %d:- %s\n ",i+1,name[i]);

	}

printf("\n program sucessful");

getch();

}
