#include<stdio.h>
int main()
{
    int numof_part,numof_finish,i,count=0,flag=0;
    int valueof_part[100];
    scanf("%d %d",&numof_part,&numof_finish);
    for(i=0; i<numof_part; i++)
    {
        scanf("%d",&valueof_part[i]);
    }
    for(i=0; i<numof_part; i++)
    {
        if(valueof_part[i]==0)
            break;
        if(valueof_part[i]>=valueof_part[numof_finish-1])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

