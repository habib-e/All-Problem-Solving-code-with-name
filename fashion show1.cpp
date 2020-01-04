#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,ppl;
        cin>>ppl;
        int men[ppl],women[ppl];
        for(i=0;i<ppl;i++)
            cin>>men[i];
        for(i=0;i<ppl;i++)
            cin>>women[i];
        sort(men,men+ppl);
        sort(women,women+ppl);
        long long ans=0;
        for(i=0;i<ppl;i++)
            ans+=men[i]*women[i];
        cout<<ans<<endl;
    }

    return 0;
}
