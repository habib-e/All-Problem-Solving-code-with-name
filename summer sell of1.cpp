#include"bits/stdc++.h"
using namespace std;
long long sum1,sum2,sum3,a,b,sum,n,f;
int main(){

	cin>>n>>f;
	vector<long long> x;
	for(int i=0;i!=n;++i){
		cin>>a>>b;
		sum+=min(a,b);
		sum1=min(2*a,b);
		sum2=min(a,b);
		sum3=sum1-sum2;
		x.push_back(sum3);
	}
	sort(x.rbegin(),x.rend());
	for(int i=0;i!=f;++i)
		sum+=x[i];
	cout<<sum;

	/*


	map<int,int>m;
    map<int,int>::iterator it;
    cin>>n>>f;
    while(n--)
    {
        cin>>k>>l;
        m.insert(make_pair(l,k));
    }
    for(it=m.end();it!=m.begin();it++)
    {
        if(cnt<=f && it->second!=0)
        {
            if((it->second*2)<=(it->first))
            {
                sum+=it->second;
                cnt++;
            }
            else
            {
                sum+=it->second*2;
                cnt++;
            }
        }
        else if(cnt>f && cnt<=n && it->second!=0)
        {
            for(it=m.begin();it!=m.end();it++)
            {
                if()
                {

                }
            }
        }
    }






	*/








	return 0;
}
