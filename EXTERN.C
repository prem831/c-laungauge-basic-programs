#include<stdio.h>
#include<conio.h>
extern int i=10;
void main()
{
int i=20;
void show();
clrscr();
printf("%d\n",i);
show();
getch();
}
void show()
{
printf("%d",i);
}