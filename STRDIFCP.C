#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[60];
clrscr();
printf("enter a string:");
gets(a);
printf("enter a string:");
gets(b);
printf("\n\n\n");
strcpy(&a[4],&b[7]);
puts(a);
getch();
}

