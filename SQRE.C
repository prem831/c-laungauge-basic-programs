#include<stdio.h>
#include<conio.h>
void main( )
{
char another ;
int num;
clrscr();
do
{
printf ( "Enter a number " ) ;
scanf ( "%d", &num ) ;
printf ( "square of %d is %d", num, num * num ) ;
printf ( "\nWant to enter another number y/n " ) ;
scanf ( " %c", &another ) ;
}
while ( another == 'y' ) ;
getch();
}