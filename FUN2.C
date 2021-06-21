#include<stdio.h>
#include<conio.h>
int add(void);
void main()
{
clrscr();
add();
getch();
}
int add(void)
{
int a,b,c;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
printf("a+b=%d",c);
return 0;
}
