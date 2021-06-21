#include<stdio.h>
#include<conio.h>
void main()
{
int n;
float sum=0;
clrscr();
for(n=1;n<=10;++n)
{
sum+=1/(float)n;
printf("%2d%9.4f\n",n,sum);
}
getch();
}
