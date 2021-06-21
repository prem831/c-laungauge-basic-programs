#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,l,m,n,ln;
char a[100];
clrscr();
printf("enter a string:");
gets(a);
ln=strlen(a);
fflush(stdin);
take:
printf("\nenter the number of characters in sub string:");
scanf("%d",&n);
printf("from which place the sub string is starting from?");
scanf("%d",&m);
if((n+m)<=(ln+1))
{
printf("\nrequired sub string is: ");
for(i=m-1,l=1;l<=n;i++,l++)
printf("%c",a[i]);
}
else
{
printf("\nyou entered illigal format for wanted substring in main string");
goto take;
}
getch();
}

