#include<stdio.h>
int main()
{
    int a,b;
    int count=0;
    scanf("%d %d",&a,&b);
    int limak=a,bob=b;
    int i=1;
    while(i!=0)
    {
        limak=limak*3;
        bob=bob*2;
        count++;
        if(limak>bob)
        {
            i=0;
            break;
        }
        i++;
    }
    printf("%d",count);
    return 0;

}
