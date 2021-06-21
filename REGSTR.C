#include<stdio.h>
#include<conio.h>
void main()
{
int i=10;
clrscr();
{
register int i=20;
printf("%d\n",i);
}
printf("%d",i);
getch();
}