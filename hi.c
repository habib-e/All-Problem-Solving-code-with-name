#include<stdio.h>
#include<math.h>
int t,n,x,a,b,s=0,aa=0,bb=0;
int main()
{
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        cin>>n>>x>>a>>b;
        if(a>b)
        {
            aa=a;
            bb=b;
        }
        else if(b>a)
        {
            aa=b;
            bb=a;
        }


        if(n==aa || x==0)
        {
            cout<<abs(aa-bb)<<endl;
        }
        else
        {
            while(x--)
                ++aa;
            cout<<abs(aa-bb)<<endl;
        }
        aa=bb=0;


    }


    return 0;
}
