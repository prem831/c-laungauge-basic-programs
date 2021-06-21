
Merging of two files into a third file
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{ 
FILE *fs1, *fs2, *ft;

char ch;

if(argc != 4)
{
printf("error in specifying the files");
exit(0);
}

fs1 = fopen(argv[1],"r");
fs2 = fopen(argv[2],"r");

if( fs1 == NULL || fs2 == NULL )
{ 
printf("Error in files");

}
else
{
    ft = fopen(argv[3],"w");

  if( ft == NULL )
 { 
   printf("Error ");
 
  }
else
{
while( ( ch = fgetc(fs1) ) != EOF )
fputc(ch,ft);

while( ( ch = fgetc(fs2) ) != EOF )
fputc(ch,ft);

printf("Two files were merged into %s file successfully.\n",file3);

fclose(fs1);
fclose(fs2);
fclose(ft);
}
}

return 0; 
}.