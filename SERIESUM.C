#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long sum;
int n,x,i;
clrscr();
printf("\nenter the values of x and n:");
scanf("%d%d",&x,&n);
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
getch();
}