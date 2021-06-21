
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int num;

clrscr();
printf("Enter the value\n");
scanf("%d",&num);
 sum=0;

  while(num != 0)
  {	rem = num % 10;
	num = num / 10;
	sum +=pow(rem,3);
  }
  if(num==sum)
	printf("%d is armstrong\n",num);
 
   else 
        printf("%d is not armstrong\n",num);
 
getch();
return 0;
}


output:
Enter the value

153 is armstrong

