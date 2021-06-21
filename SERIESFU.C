#include<stdio.h>
#include<conio.h>
#include<math.h>
void ser(int,int);
void main()
{
int n,x;
clrscr();
printf("\nenter the values of x and n:");
scanf("%d%d",&x,&n);
ser(x,n);
getch();
}
void ser(x,n)
{
long sum,i;
if(n<=0||x<=0)
printf("the values must be positive numbers.please try again\n");
else
{
sum=1;
for(i=1;i<=n;i++)
{
sum+=pow(x,i);
}
printf("sum of series:%ld\n",sum);
}
}










