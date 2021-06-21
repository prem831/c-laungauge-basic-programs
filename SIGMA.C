#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
float sum=0;
clrscr();
printf("\n\t\tprogram to find sigma 1 to n of (1/i)");
printf("\n\nenter the value of n:");
scanf("%d",&n);
printf("sigma 1 to %d of(1/i)y=",n);
for(i=1;i<=n;i++)
sum+=1/(float)i;
printf("%.4f",sum);
getch();
}
