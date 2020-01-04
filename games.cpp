#include<stdio.h>
int main()
{
    int i,n,j,cnt=0;
    int ar[101];
    scanf("%d",&n);
    int m=n*2;
    for(i=0;i<m;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<m;i=i+2)
    {
        for(j=1;j<m;j=j+2)
        {
            if(ar[i]==ar[j])
                cnt++;
        }
        j=1;
    }
    printf("%d\n",cnt);
    return 0;
}
