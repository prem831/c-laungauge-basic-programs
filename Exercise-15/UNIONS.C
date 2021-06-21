/*Program for demonstrating the use of unions*/


#include <stdio.h>
#include <conio.h>
void main ()
{
  union student/*Declaring union*/
  {
   int roll_no;
   char result;
   }st1,st2;
clrscr();
/*Initializing union variables*/
  st1.roll_no=20;
  st2.result=’P’;
/*Accessing and printing the values correctly*/
   printf(“\nRoll NO: %d”,st1.roll_no);
   printf(“\nResult: %c”,st2.result);
   printf(“\n\n”);
/*Accessing and printing the values incorrectly*/
   printf(“\nRoll NO: %d”,st2.roll_no);
   printf(“\nResult: %c”,st1.result);
getch();
}