Multiplication table of n upto m
#include<stdio.h>
#include<conio.h>
void main()
{
int n,I,m;
clrscr();
printf("enter n and m \n");
scanf("%d %d",&n,&m);
for(i=1;i<=m;i++)
printf("%d * %d = %d\n",n,i,n*i);
getch();
}

