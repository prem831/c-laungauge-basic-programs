#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;
    clrscr();
    printf("\n enter the lengths of 3 sides");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("\n area is %f",area);
        getch();
}
/*
RESULT:
 enter the lengths of 3 sides 4 5 6
 area is 9.921567

*/