#include<bits/stdc++.h>
using namespace std;
int t,i,j,k;
char s[5008],c[5008];
int main()
{
    for(scanf("%d",&t); t--; strcmp(s,c)<0?printf("%s\n",s):printf("---\n"))
        for(scanf("%s%s",s,c),i=0; s[i]; ++i)
        {
            for(k=j=i; s[j]; s[k]<s[j]?0:k=j,++j);
            if(s[i]!=s[k])
                for(swap(s[i],s[k]); s[i]; ++i);
        }
    return 0;
}
