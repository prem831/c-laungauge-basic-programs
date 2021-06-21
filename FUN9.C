#include<stdio.h>
#include<conio.h>
int add();
void main()
{
int d;
clrscr();
d=add();
printf("a+b=%d",d);
getch();
}
int add()
{
int a,b,c;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
