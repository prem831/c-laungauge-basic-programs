#include<stdio.h>
#include<stdio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%3d",j);
printf("\n");
}
getch();
}

