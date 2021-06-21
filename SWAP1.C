#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the values of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
b=(a+b)-(a=b);
c=(b+c)-(b=c);
printf("\na=%d\nb=%d\nc=%d",a,b,c);
getch();
}
