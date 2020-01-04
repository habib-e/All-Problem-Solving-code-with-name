#include<stdio.h>
int main()
{

   int player,start,pass,i,test,count,j;
   while(scanf("%d",&test)==1)
   {
      for(i=1;i<=test;i++)
      {
          count=0;
          scanf("%d%d%d",&player,&start,&pass);
          for(j=start; ;j++)
          {
              if(count==pass)
                break;
              if(j==player)
              {
                  count++;
                  j=0;
              }
              else{
                count++;
              }
          }
          printf("Case %d: %d\n",i,j);
      }
   }
   return 0;
}
