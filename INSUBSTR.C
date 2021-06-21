#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char a[30];
char b[30];
char c[30];
int p,la,i,t=0,s,lb,o;
char x;
clrscr();
puts("Enter main string:");
gets(a);
puts("Enter the sub-string which you want to be insert in main string:");
gets(b);
printf("Enter the position where the substring has to be inserted in main string: ");
scanf("%d",&p);
p--;
la = strlen(a);
lb = strlen(b);
i=0;
while(i <= la)
{
 c[i]=a[i];
 i++;
}
s = lb+la;
o = p+lb;
for(i=p;i<s;i++)
{
 x = c[i];
 if(t<lb)
 {
  a[i] = b[t];
  t=t+1;
 }
 a[o]=x;
 o=o+1;
}
printf("%s", a);
getch();
}
