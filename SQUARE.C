#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j;
char ch;
clrscr();
printf("enter a character:");
scanf("%c",&ch);
fflush(stdin);
printf("enter the no of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if((i==(n/2)+1)&&(j==(n/2)+1))
printf("o");
if((i==(n/2)+1)&&(j==n))
break;
printf("%c",ch);
}
printf("\n");
}
getch();
return 0;
}

