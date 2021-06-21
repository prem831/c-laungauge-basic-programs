#include<stdio.h>
#include<conio.h>
int main()
{
int n;
int fib(int);
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
printf("The %dth fibonacci number = %d\n",n,fib(n));
getch();
return 0;
}

int fib(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
RESULT:

Enter the number
5
The 5th fibonacci number = 3
