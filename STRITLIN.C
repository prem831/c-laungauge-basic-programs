#include<stdio.h>
#include<conio.h>
void main()
{
int x1,x2,y1,y2;
float m,c;
clrscr();
printf("\n\t****************EQUATION OF STRIGHT LINE***************");
printf("\n\nif strightline Y = m.X+ c passing through the points (x1,y1) and (x2,y2)\n");
printf("enter first point (x1,y1):");
scanf("%d%d",&x1,&y1);
printf("\nenter second point (x2,y2):");
scanf("%d%d",&x2,&y2);
m=(float)((x1*y1)+(x2*y2)-(x1*y2)-(x2*y1))/(float)((x1*x1)+(x2*x2)-(2*x1*x2));
c=((y1+y2)-(m*(x1+x2)))/2.0;
printf("the equation strightline passing through given ponts:\n\n\t\t\t");
printf("Y = %.2f X + %.2f",m,c);
getch();
}