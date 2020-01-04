#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch,h[100];
    FILE *fp;
    fp=fopen("habib4.txt","w");
    fprintf(fp,"%s %d","hello there",404);
    fclose(fp);
    return 0;
}
