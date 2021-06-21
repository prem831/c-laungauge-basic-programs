

       #include<stdio.h>
       #include<conio.h>

       int str_cmp(char *a, char *b)
       {
	  int i=0;
	  while(a[i]!='\0' && b[i]!='\0')
	  {
	     if(a[i]!=b[i])
	      return (a[i]-b[i]);
	     i++;
	  }
	  return(a[i]-b[i]);
      }

	void main()
	{
	   char a[20],b[20];
	   int ans;
	   clrscr();
	   printf("enter any string");
	   gets(a);
	   printf("enter another string");
	   gets(b);
	   ans=str_cmp(a,b);
	   printf("\n the difference between %s and  %s is %d",a,b,ans);
	   getch();
	}

output:

enter any string rama
enter another string krishna

 the difference between  rama and  krishna is 7
