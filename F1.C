#include<stdio.h>
#include<conio.h>
void add();
void mul();
int a[500],i,b;
int k,n;
void main()
{
clrscr();
printf("\n\t**************ADDITION AND MULTIPLICATION**************\n\n");
printf("\t\tMAIN MENU");
printf("\n1.Addition\n2.multiplication\n3.exit");
printf("\n\t\t\t****[ ]****\b\b\b\b\b\b");
scanf("%d",&k);
if(k==1)
printf("\nhow many numbers you want to add:");
else if(k==2)
printf("\nhow many numbers you want to multiply:");
else if(k==3)
exit(0);
else
main();
scanf("%d",&n);
switch(k)
{
case 1:
add();
break;
default:
mul();
}
getch();
}
void add()
{
b=0;
printf("\n\nenter numbers you want to add:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
b+=a[i];
printf("the addition of entered numbers is:%d",b);
getch();
main();
}
void mul()
{
b=1;
printf("\n\nenter numbers you want to multiply:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
b*=a[i];
printf("the addition of entered numbers is:%d",b);
getch();
main();
}
