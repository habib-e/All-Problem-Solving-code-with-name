#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    FILE *file;
    char name[20]="Habib Bashar";
    int len=strlen(name);
    int i;
    file=fopen("test1.txt","w");
    if(file==NULL)
    {
        cout<<"file doesn't exist";
    }
    else
    {
        cout<<"file is created";
        gets(name);
        fputs(name,file);
        fclose(file);
    }
    return 0;
}
