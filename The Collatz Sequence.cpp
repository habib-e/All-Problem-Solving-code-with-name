#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,l,j=1,cnt=0,s=0;
    while(scanf("%lld %lld",&a,&l)!=EOF)
    {
        s=a;
        if(a==-1 && l==-1)
            break;
        while(a!=1)
        {
            if(a%2==0)
            {
                a=a/2;
                cnt++;
            }
            else
            {
                a=((a*3)+1);
                cnt++;
            }
            if(a>l)
                break;
//        cnt++;

        }
        if(a==1)
            cnt++;
        cout<<"Case "<<j++<<": A = "<<s<<", limit = "<<l<<", number of terms = "<<cnt<<"\n";
        s=cnt=0;
    }


    return 0;
}
