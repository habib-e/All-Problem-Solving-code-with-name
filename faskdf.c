#include<stdio.h>
int main()
{
    unsigned long long int a,b,c,x=1,y=1;
    scanf("%llu %llu %llu",&a,&b,&c);
    if(a%c==0)
        x=a/c;
    else if(a%c!=0)
        x=(a/c)+1;
    if(b%c==0)
        y=b/c;
    else if(b%c!=0)
        y=(b/c)+1;
    printf("%llu\n",x*y);
    return 0;
}
