#include <stdio.h>
#include <stdlib.h>
#define nn \n
int main()
{
   char ch, file_name[20];
   char s[100][20];
   int i,j;
   int ar[100];
   FILE *fp;

   printf("Enter name of a file you wish to see : \n");

   fp = fopen("habib6.txt","w"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of %s file are:\n", file_name);
   for(i=0;i<10;i++)
    scanf("%d",&ar[i]);
   for(i=0;i<10;i++){
        if(ar[i]%2==0)
        {
            fprintf(fp,"%s %d nn","even",ar[i]);
        }
        else
            fprintf(fp,"%s %d nn","odd",ar[i]);
   }
   fclose(fp);
   return 0;
}
