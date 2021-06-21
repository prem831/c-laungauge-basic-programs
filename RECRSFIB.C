#include<stdio.h>
#include<conio.h>
void fib(int);
int i=0,j=1,n,k;
void main()
{
clrscr();
printf("enter the length of fibonacci series:");
scanf("%d",&n);
printf("\nthe fibonacii series upto %d :",n);
printf("%d %d",i,j);
fib(n);
getch();
}
void fib(n)
{
if(n>2)
{
k=i+j;
printf("%3d",k);
i=j;
j=k;
fib(n-1);
}
}





