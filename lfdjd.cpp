#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iterator>
#include<cstring>
using namespace std;
int f,m,cnt,cnt1,w,b,ncnt,fst,snd,n,i;
string s,s1,s2;
int main()
{
    cin>>n;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[0]){
                s1[i]=1;
                cnt++;
            b++;
        }
        else{
            s2[i]=-1;
            cnt1++;
            w++;
        }
    }
    //debug zone:
    cout<<"cnt :"<<cnt<<"cnt1 : "<<cnt1<<"b : "<<b<<"w : "<<w<<endl;



    for(i=0;i<s.size();i++)
        {
            cout<<s1[i]<<" ";
        }
    for(i=0;i<s.size();i++)
        {
            cout<<s2[i]<<" ";
        }

    cout<<endl<<endl<<endl<<endl;


    //debug zone:
    if((b>1 && w%2!=0) ||(w>1 && b%2!=0))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(b==n || w==n)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(cnt1%2==0 && b>1)
    {
        if(cnt1==w)
        {
            for(i=0;i<s.size();i++)
            {
                if(s2[i]==-1)
                {
                    if(f==0)
                    {
                        fst=i;
                        f=1;
                    }

                }
                else
                {
                    if(m==0)
                    {
                        snd=i;
                        snd--;
                        m=1;
                    }


                }

            }
        }
        for(i=fst+1;i<=snd;i++)
        {
            if(s[i]==s[i-1])
            {
                ncnt++;
            }
        }
        if(ncnt==w)
        {
            cout<<w/2<<endl;
            cout<<w<<" "<<fst+1<<" "<<snd+1<<endl;
            return 0;
        }


    }

    return 0;
}
