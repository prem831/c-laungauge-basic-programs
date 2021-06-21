#include<stdio.h>
#include<conio.h>
int fac(int);
int main()
{
int fact,n;
clrscr();
printf("enter a number to know factorial of that no:");
scanf("%d",&n);
fact= fac(n);
printf("the factrial of %d is=%d",n,fact);
getch();
return 0;
}
int fac(int n)
{
if(n==1)
return 1;
else
return n * fac(n-1);
}
