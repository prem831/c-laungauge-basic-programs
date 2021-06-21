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
l=strlen(a);
for(i=0;i<l;i++)
printf("%c_%d,",a[i],a[i]);
getch();
}

