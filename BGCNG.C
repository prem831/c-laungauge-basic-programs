#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d;
float r1,real,r2,img;
clrscr();
printf("enter the values of a,b,c in axx+bx+c=0:");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d>0)
{
r1=(-b+(float)sqrt(d))/(2*a);
r2=(-b-(float)sqrt(d))/(2*a);
printf("\n roots are real and distinct");
printf("\n roots are %.2f and %.2f",r1,r2);
}
else if(d==0)
{
r1=r2=-b/(2*a);
printf("\n roots are real and equal");
printf("\n roots are %.2f and %.2f",r1,r2);
}
else
{
real=(float)-b/(2/a);
img=sqrt(-d) /(2*a);
printf("\n roots are imaginary and distinct");
printf("\nroots are %.2f+i%.2f and %.2f-i%.2f",real,img,real,img);
}

getch();
}