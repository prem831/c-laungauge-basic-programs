#include<stdio.h>
#include<conio.h>
int add(int,int);
int c;
void main()
{
int a,b;
clrscr();
printf("enter two numbers:");
scanf("%d%d",&a,&b);
add(a,b);
printf("a+b=%d",c);
getch();
}
int add(int x,int y)
{
c=x+y;
return 0;
}
