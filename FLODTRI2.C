#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,n=1,j,m=1,p;
clrscr();
printf("\n\t\t***floyd's triangle***\n\n");
printf("enter the no of rows of triangle:");
scanf("%d",&k);
{
for(i=1;i<=k;i++)
{
for(j=m,p=1;p<=n;p++,j++)
printf("%4d",j%2);
m=j;
n++;
printf("\n");
}
}
getch();
}

