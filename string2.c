#include<stdio.h>
int main()
{
    char h[10];
    int i=0;
    gets(h);
    while(h[i]!='\0')
    {
        printf("%c\n",h[i]);
        i++;
    }
    return 0;
}
