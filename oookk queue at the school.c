#include<stdio.h>
int main()
{
    int n=0,t,i,j;
    char string[110];
    scanf("%d %d",&n,&t);
    scanf("%s",string);
    for(j=0;j<t;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(string[i]=='B' && string[i+1]=='G')
            {
                string[i]='G';
                string[i+1]='B';
                i++;
            }
        }
    }
    printf("%s\n",string);
    return 0;
}

