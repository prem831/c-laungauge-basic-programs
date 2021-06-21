#include<stdio.h>
#include<conio.h>
void main()
{
long int m,n,x=1,i=0,j;
clrscr();
printf("enter a number:");
scanf("%ld",&n);
m=n;
for(;n!=0;n=n/10,i++);
for(j=1;j<i;j++)
x*=10;
for(;m!=0;m%=x,x/=10)
printf("\n%ld",m);
getch();
}