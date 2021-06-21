program to find the value of cosx  


#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x,sum,term;
int i,n;
clrscr();
printf("enter the no of terms\n");
scanf("%d",&n);
printf("enter the angle in degrees x \n");
scanf("%f",&x);
x=(x*3.14)/180;
sum=1;
term=1;
for(i=1;i<=n;i++)
{
term=(term*(-1)*x*x)/((2*i)*(2*i-1));
sum+=term;
}
printf("cos valve of given angle is %f",sum);
getch();
}


Output:

enter the no of terms
3
enter the angle in degrees x
30
cos valve of given angle is 0.866158




