#include<stdio.h>
#include<string.h>
int main()
{
    char m[100000],m1[100000],m2[10],m3[10],m4[10],m5[10000];
    int h;
    scanf("%d",&h);
    while(h--)
    {
        int i=0,j,z=5;
        scanf("%s",m);
        j=strlen(m)-1;
        m1[z]=m2[z-1]=m3[z-1]=m4[z-3]='\0';
        while(z--)
        {
            m1[z]=m[j];
            if(z>0)
            {
                m2[z-1]=m[j];
                m3[z-1]=m[j];
            }
            if(z>2)
            {
                m4[z-3]=m[j];
            }
            j--;
        }
        if(!strcmp(m1,"mnida")){
            printf("KOREAN\n");
        }
        else if(!strcmp(m2,"desu")){
            printf("JAPANESE\n");
        }
        else if(!strcmp(m3,"masu")){
           printf("JAPANESE\n");
        }
        else if(!strcmp(m4,"po")){
            printf("FILIPINO\n");
        }
    }
    return 0;
}
