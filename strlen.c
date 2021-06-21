Program to find  the length of the given string 
       #include<stdio.h>
       #include<conio.h>

       int str_len(char *s)
	  {
	     int i;
	     i=0;
	     while(s[i] !='\0')
	       i++;
	     return (i);
	  }


	void main()
	{
	   char a[20];
	   int ans;
	   clrscr();
	   printf("enter any string");
	   gets(a);
	   ans=str_len(a);
	   printf("\n length of %s   is  %d",a,ans);
	   getch();
	}

