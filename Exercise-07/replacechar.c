replacing a character

#include<stdio.h>
void main()
{
char a[20],d,s;
int ch,I,pos=0;
clrscr();
printf("enter any string");
	   gets(a);
printf(“enter the character to be replaced and replacing character \n”);
scanf(“%c%c”,d,s);
printf("************************************");
printf("\n\t\tMENU");
printf("\n**********************************");
printf("\n[1]Beginning");
printf("\n[2]End");
printf("\n[3]Particular Location");

printf("\n[0]EXIT");
printf("\n**********************************");
printf("\n\tEnter your choice:\n");
scanf("%d",&ch);
if(ch<=3 & ch>0)
{
 printf("Valid Choice\n");
}
switch(ch)
{
  case 1:
    for(i=0;   a[i]!=’\0’ ; ;i++)
     {
  if(a[i]==d)
   {
a[i]=c;
break;
            }
   }
  break;

  case 2:
    for(i=0;   a[i]!=’\0’ ; ;i++)
     {
  if(a[i]==d)
    pos=i+1;
     }
If(pos>0)
{
pos--;
  a[pos]=c;
}


  break;
case 3 :
printf(“enter the location of the character to be replaced”);
scanf(%d”,&pos);
   a[pos]=c;
   break;

  case 0:
  printf("\n Choice Terminated");
  exit();
  break;

  default:
  printf("\n Invalid Choice");
}
Printf(“%s”,a);
getch();
}
