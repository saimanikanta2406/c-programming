#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   char fname[100];
   FILE *fptr;
   printf(" Input the filename to be opened : ");
	scanf("%s",fname);

   if ((fptr = fopen(fname,"r")) == NULL){
       printf("Error! opening file");

       exit(1);
   }

   

   printf("The File was opened successfully");
   fclose(fptr); 
  
   return 0;
}
