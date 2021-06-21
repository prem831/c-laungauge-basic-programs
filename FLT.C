#include<conio.h>
#include<stdio.h>
void main()
{
float deg,rad;
clrscr();
printf("enter the degrees value:");
scanf("%f",&deg);
rad=(deg*3.14)/180.00;
printf("\nthe equivalent value in radians %f",rad);
getch();
}
