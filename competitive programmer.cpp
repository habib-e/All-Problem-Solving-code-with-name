#include<bits/stdc++.h>
using namespace std;
#define CLR(a) memset(a,0,sizeof(a))
int cnt[15];
int main() {

    int n;
    cin >> n;
    string s;
    for(int i=1;i<=n;i++) {
        cin >> s;
        CLR(cnt);
        int sum = 0;
        for(int i=0;i<s.size();i++) {
            cnt[s[i]-'0']++;
            sum += s[i]-'0';
        }
        if(sum % 3 == 0) {
            int tmp = cnt[2] + cnt[4] + cnt[6] + cnt[8];
            if((cnt[0] == 1 and tmp != 0) or cnt[0] > 1){
                cout << "red\n";
            }
            else cout << "cyan\n";
        }
        else {
            cout << "cyan\n";
        }
    }
    return 0;
}
