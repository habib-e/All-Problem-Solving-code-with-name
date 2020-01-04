#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		bool y=false;
		sort(a.begin(),a.end());
		for(int i=0;i+a.size()<=b.size();++i){
			string s=b;
			sort(s.begin()+i,s.begin()+i+a.size());
			if(s.substr(i,a.size())==a)
				y=true;
		}
		if(y)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
