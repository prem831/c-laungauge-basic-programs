

Program to reverse the contents of the given  string  
 #include<stdio.h>
 #include<conio.h>

 void str_rev(char *s)
    {
	    int i,j;
	    char temp;
	    i=0;
	    j=0;
	    while(s[j+1]!='\0')
	      j++;
	    while(i<j)
	     {
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	      }
      }


	void main()
	{
	   char a[20];
	   clrscr();
	   printf("enter any string");
	   gets(a);
	   str_rev(a);
	   printf("reverse string is %s",a);
	   getch();
	}

output:

enter any string college
reverse string is egelloc
