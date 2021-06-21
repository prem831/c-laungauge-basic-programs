#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,l;
char a[100];
clrscr();
printf("enter a string:");
gets(a);
fflush(stdin);
printf("\nenter the number of characters in sub string:");
scanf("%d",&n);
printf("from which place the sub string is starting from?");
scanf("%d",&m);
for(i=m-1,l=1;l<=n;i++,l++)
printf("%c",a[i]);
getch();
}

