       
Program to concatenate the contents of the given 
      string  to another by using user defined function


#include<stdio.h>
       #include<conio.h>

       char* str_cat(char *d,char *s)
	  {
	     int i,j;
	     i=0;
	     while(d[i]!='\0')
		i++;
	     j=0;
	     while(s[j]!='\0')
	     {
	     d[i]=s[j];
	     i++;
	     j++;
	     }
	     d[i]='\0';
	     return c;
	  }

	void main()
	{
	   char a[20],b[20];
	   clrscr();
	   printf("enter any string");
	   gets(a);
	   printf("enter another string");
	   gets(b);
	   str_cat(b,a);
	   printf("\n destination string is %s ",b);
	   getch();
	}

output: 

enter any string engineering
enter another stringcollege

 destination string is college engineering
