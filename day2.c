#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,m,y;
printf("you can predict the day from any date\n\n\n");
printf("enter year:");
scanf("%d",&y);
printf("\n\aenter month number:");
scanf("%d",&m);
printf("enter any date from")
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
{
printf(" 1 to 31:");
}
else if(x%4==0&&m==2)
{
printf(" 1 to 29:");
}
else if(m==2)
{
printf(" 1 to 28:");
}
else
{
printf(" 1 to 30:");
}
scanf("%d",&d);
a=y-1900;
a=a/y;
a=a+y-1900;
else if(m==1||m==10)
{
b=1;
}
else if(m==2||m==3||m==11)
{
b=4;
}
if(m==7||m==4)
{
b=0;
}
else if(m==5)
{
b=2;
}
else if(m==6)
{
b=5;
}
else if(m==8)
{
b=3;
}
else if(m==9||m==12)
{
b=1;
}
else
{
exit(0);
}
a=a+b;
a=a+d;
c=a%7;
switch(c)
{
case 1:printf("\n\t\a\a\asunday");
break;
case 2:printf("\n\t\a\a\amunday");
break;
case 3:printf("\n\t\a\a\atuesday");
break;
case 4:printf("\n\t\a\a\awednday");
break;
case 5:printf("\n\t\a\a\athursday");
break;
case 6:printf("\n\t\a\a\afriday");
break;
case 0:printf("\n\t\a\a\asaturday");
break;
default:exit(0);
}
printf("\a\a\a\a\n\n\n\t\t\t\t\t\t\t\t\t\t\t program designed by prem sai\a\a");
printf("\a\a\a\a\n\n\n\t\t\tbay!");
printf("\a\a\a\a\n\n\n\t\t\tbay!");
printf("\a\a\a\a\n\n\n\t\t\tbay!");
printf("\a\a\a\a\n\n\n\t\t\tgood bay!");
getch();
}
