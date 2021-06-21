/*
                    \*predicting day from date*\


	march--------1			    september--------7
	april--------2                      october----------8
	may----------3                      november---------9	
	june---------4                      december---------10
	july---------5                      january----------11
	august-------6                      february---------12


           f=k + (13*m-1)/5 + d/4 + d + c/4 - 2*c

k------->date
m------->month number
d------->last two digits of year
c------->the firsttwo digits of year

CONDITIONS
{
january && february-------->>>>> d-=1
we should omit fraction part in each term and steps
if f is negitive then perform----->>>>  f+=7
}
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int f,k,m,d,c,x,y,z,r;
clrscr();
printf("you can predict the day from any date\n\n\n");
printf("enter year:");
scanf("%d",&x);
printf("\n\aenter month:");
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
scanf("%d",&k);
c=x/100;
d=x%100;
y=c/4;
if(m==1&&m==2)
{
d-=1;
}
z=d/4;
f=k+((13*m-1)/5)+z+d+y-(2*c);
if(f<0)
{
f+=63;
}
r=f%7;
switch(r)
{
cas0:printf("\n\t\a\a\asunday");
break;
cas1:printf("\n\t\a\a\amunday");
break;
cas2:printf("\n\t\a\a\atuesday");
break;
cas3:printf("\n\t\a\a\awednday");
break;
cas4:printf("\n\t\a\a\athursday");
break;
cas5:printf("\n\t\a\a\afriday");
break;
cas6:printf("\n\t\a\a\asaturday");
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
