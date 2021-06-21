#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a,b,c;
clrscr();
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("a+b=%d",c);
getch();
}
int add(int x,int y)
{
int c;

c=x+y;
return c;
}
