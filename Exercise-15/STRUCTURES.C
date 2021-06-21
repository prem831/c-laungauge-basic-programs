/* WRITE A PROGRAM THAT ILLUSTRATES THE USE OF STRUCTURES */


#include <stdio.h>
#include <conio.h>
void main ()
{
   int num, i=0;
   struct student/*Declaring the student structure*/
    {
    char name[30];
    int rollno;
    int t_marks;
    };
struct student std[10];
clrscr();
/*Reading the number of students for which details are to be entered*/
   printf(“Enter the number of students: “);
   scanf(“%d”,&num);
/*Reading the student details*/
for(i=0;i<num;i++)
{
   printf(“\nEnter the details for %d student”,i+1);
   printf(“\n\n Name “);
   scanf(“%s”,std[i].name);
   printf(“\n Roll No. “);
   scanf(“%d”,&std[i].rollno);
   printf(“\n Total Marks “);
   scanf(“%d”,&std[i].t_marks);
}
/*Displaying the student details*/
printf(“\n Press any key to display the student details!”);
getch();
for(i=0;i<num;i++)
printf(“\nstudent %d \n Name %s \n Roll No. %d \n Total Marks %d\n”,i+1,std[i].name, std[i].rollno,
std[i].t_marks);
getch();
}