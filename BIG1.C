#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the values of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("\nthe biggest number is %d",a);
}
else
{
printf("\nthe biggest number is %d",c);
}
}
else
{
if(b>c)
{
printf("\nthe biggest number is %d",b);
}
else
{
printf("\nthe biggest number is %d",c);
}
}
getch();
}



