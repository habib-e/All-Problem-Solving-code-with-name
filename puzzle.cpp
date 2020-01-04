#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,ans;
    scanf("%d%d",&n,&m);
    int a[m],i;
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+m);
    ans=a[n-1]-a[0];
    for(i=0;i<=m-n;i++){
        if(a[i+n-1]-a[i]<ans)
            ans=a[i+n-1]-a[i];
    }
    printf("%d\n",ans);
    return 0;
}
