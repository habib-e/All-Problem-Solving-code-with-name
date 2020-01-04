#include<stdio.h>
#include<string.h>
int main()
{
    char y[10];
    int x=0,i=0,z=0,num,sum=0;
    scanf("%d",&num);
    for(i=0; i<num; i++)
    {
        z=0;
        x=0;
        scanf("%s",y);
        if((y[0]=='+' && y[1]=='+' && y[2]=='X') || (y[0]=='X' && y[1]=='+' && y[2]=='+'))
        {
            x=x+1;
            sum=sum+x;
        }
        else if((y[0]=='-' && y[1]=='-' && y[2]=='X') || (y[0]=='X' && y[1]=='-' && y[2]=='-'))
        {
            z=z-1;
            sum=sum+z;
        }
    }
    printf("%d",sum);
    return 0;
}
