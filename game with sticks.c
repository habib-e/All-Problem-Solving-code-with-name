#include<stdio.h>
int main()
{
    int n=0,m=0,c=0;
    scanf("%d %d",&n,&m);
    while(n!=0 && m!=0)
    {
        n--;
        m--;
        if(c==0)
            c=1;
        else
            c=0;
    }
    if(c==0)
        printf("Malvika");
    else
        printf("Akshat");
    return 0;
}
