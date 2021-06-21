#include<stdio.h>
#include<conio.h>
int add(void);
void main()
{
int c;
clrscr();
c=add();
printf("a+b=%d",c);
getch();
}
int add(void)
{
int a,b,c;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
