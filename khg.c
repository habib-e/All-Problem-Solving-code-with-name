#include<stdio.h>
main()
{
    int f=0,s=1,n,feb,i;
    scanf("%d",&n);


        for(i=0;i<n;i++)
        {
            if(i<=1)
            {
                feb=i;
            }
            else
            {
                feb=f+s;
                f=s;
                s=feb;

            }
            printf("%d",feb);



        }




}
