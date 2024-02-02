#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#include "bits/stdc++.h"
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            emp                emplace_back
#define          sz(a)               (int)a.size()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long int
const int MOD = 1000000007;

using namespace std;


void solve(){
    int n; cin>>n;
    int k; cin>>k;

    int b = n/k;
    int r = n%k;
    int gcd = __gcd(r, b);
    while(gcd != r)
}

int main(){
    fst;
    cin.tie(NULL);
    int t = 1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
 