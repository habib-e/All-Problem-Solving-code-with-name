#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              " "
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main(){

    int n;
    while(cin >> n && n != 0){

        int tmp = n;
        while((tmp/10) > 0){

            int sum = 0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            tmp = sum;
            n = tmp;
        }
        cout << tmp << endl;
    }
    return 0;
}
