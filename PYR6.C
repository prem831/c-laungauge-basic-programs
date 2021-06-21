#include<stdio.h>
#include<stdio.h>
void main()
{
int i,j,n,k,a;
clrscr();
printf("enter number of rows:");
scanf("%d",&n);
a=n;
for(i=1;i<=n;i++)
{
for(k=1;k<=a;k++)
printf("  ");
a--;
for(j=1;j<=i;j++)
printf("%4d",j);
printf("\n");
}
getch();
}

