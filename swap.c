#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("enter the values of a,b \n");
scanf("%d%d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("a=%d\n b=%d\n ",a,b);
getch();
}
RESULT:
enter the values of a,b
5
3
 a=3
 b=5
