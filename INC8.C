#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
if(a++>b--)
{
printf("%d*",a+b);
}
else
{
printf("%d %d",a,b);
}
getch();
}
