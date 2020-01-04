#include<stdio.h>
int main()
{
    int num=0,input[100],limit,i=0,count=0,flag=0;
    scanf("%d",&limit);
    while(num<limit)
    {
        for(i=0; i<3; i++)
        {
            scanf("%d",&input[i]);
        }
        for(i=0; i<3; i++)
        {
            if(input[i]>0)
                count++;
        }
        if(count>=2)
            flag++;
        count=0;
        num++;
    }
    printf("%d\n",flag);
    return 0;
}

