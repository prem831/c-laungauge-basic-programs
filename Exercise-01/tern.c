
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,max;
    clrscr();
    printf("enter any three integers");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?a:b;
    max=max>c?max:c;
    printf("max is %d",max);
    getch();
    }
/*
RESULT:
enter any three integers19 35 68
max is 68
*/