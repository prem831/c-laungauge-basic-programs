#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=1,n;
clrscr();
printf("enter the number of rows:");
scanf("%d",&n);
printf("\n\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++,k++)
printf("%4d",k);
printf("\n\n");
}
getch();
}