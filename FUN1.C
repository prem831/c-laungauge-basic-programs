#include<stdio.h>
#include<conio.h>
void add(void);
void main()
{
clrscr();
add();
getch();
}
void add(void)
{
int a,b,c;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
printf("a+b=%d",c);
}
