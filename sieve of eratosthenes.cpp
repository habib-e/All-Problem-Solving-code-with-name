#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>getPrimes(int n){
    vector<int>primes;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    return primes;
}

void printVector(vector<int>v){
    for(auto val : v){
        cout<<val<<" ";
    }
    puts("");
}
bool isPrime(int n){
    if(n<2) return false;
    if(marked[n]==false) return true;
    else return false;
}
int main(){

    return 0;
}
