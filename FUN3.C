#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two numbers:");
scanf("%d%d",&a,&b);
add(a,b);
getch();
}
void add(int x,int y)
{
int c;

c=x+y;
printf("a+b=%d",c);
}
