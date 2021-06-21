#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char a[5];
int i;
clrscr();
printf("enter a string:");
gets(a);
printf("\nentred string is:\n\n");
for(i=0;a[i]!='\0';i++)
printf("%c",a[i]);
getch();
}