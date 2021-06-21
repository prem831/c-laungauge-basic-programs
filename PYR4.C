#include<stdio.h>
#include<stdio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter number of rows:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
printf("%3d",i);
printf("\n");
}
getch();
}

