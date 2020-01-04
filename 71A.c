#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,m,l=0,mn[1005],res=0;
    char str[10];
    scanf("%d %d",&n,&m);
    while(l<n)
    {
        scanf("%s",str);
        l++;
    }
    for(l=0; l<m; l++)
    {
        scanf("%d",&mn[l]);
    }
    if(n<m)
    {
        res=m*m;
    }
    else
    {
        res=0;
        for(i=0; i<m; i++)
        {
            res=res+mn[i];
        }

    }
    printf("%d\n",res);
    return 0;

}
