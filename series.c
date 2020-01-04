#include<stdio.h>
#include<math.h>
int main()
{
    int num,res=0,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        res = res + pow(i,3);
    }
    printf("%d",res);
    return 0;

}
