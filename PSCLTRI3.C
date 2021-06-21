#include<stdio.h>
#include<conio.h>
void main()
{
int a[15][15]={0};
int i,j,r,k;
clrscr();
a[0][1]=1;
printf("\n\t\t*****pascal triangle*****");
printf("\nenter no of rows:");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(k=0;k<20-i;k++)
printf("  ");
for(j=1;j<=i;j++)
{
a[i][j]=a[i-1][j-1]+a[i-1][j];
printf("%4d",a[i][j]);
}
printf("\n\n");
}
getch();
}
