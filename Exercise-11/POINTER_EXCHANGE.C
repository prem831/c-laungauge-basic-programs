/* WRITE A PROGRAM TO illustrate call by value and call by reference */

#include <stdio.h>
void exchange (int *, int *); /* prototype */
void main()
{
   int x, y;
   x = 100;
    y = 200;
 printf("Before exchange : x = %d y = %d\n\n", x, y);
    exchangebyval(x,y);/* call by value*/
    printf("After exchange : x = %d y = %d\n\n", x, y);
    printf("Before exchange : x = %d y = %d\n\n", x, y);
    exchangebyref(&x,&y);/* call by reference*/
    printf("After exchange : x = %d y = %d\n\n", x, y);
}
exchangebyref (int *a, int *b)
{
int t;
t = *a; /* Assign the value at address a to t */
*a = *b; /* put b into a */
*b = t; /* put t into b */
}

exchangebyval (int a, int b)
{
int t;
t = a; /* Assign the value at address a to t */
a = b; /* put b into a */
b = t; /* put t into b */
}