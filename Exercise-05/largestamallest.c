
#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i,n,min,max, minl=0,maxl=0;
clrscr();
printf("Enter array size\n");
scanf("%d",&n);
printf("Enter any %d elements\n",n);
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
min = a[0];
max = a[0];
for(i=0;i<n;i++)
{
	if(a[i]<min)
	{
	min = a[i];
           minl=i;
         }	
if(a[i]>max)
	{
	max = a[i];
           maxl=i;
           }
}
printf("Minimum is %d\nMaximum is %d\n",min,max);
a[minl]=max;
a[maxl]=min;

for(i=0;i<n;i++)
printf("%d",a[i]);

getch();
return 0;
}

/*

RESULT:

Enter array size
6
Enter any 6 elements
78	34	54	12	30	125
Minimum is 12
Maximum is 125
78	34	54	125	30	12

*/