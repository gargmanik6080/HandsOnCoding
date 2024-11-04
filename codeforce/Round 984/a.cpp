#pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include "bits/stdc++.h"

#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            emp                emplace_back
#define          sz(a)               (int)a.size()
#define rep(a,b) for (int i = a; i < b; i++)
#define int long long
#define vec vector<int>

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

const int MOD = 1e+7;

using namespace std;

void solve(){
    int n; cin>>n;
    int y; cin>>y;
    bool f=1;
    for(int i=0; i<n-1; i++){
        int x; cin>>x;
        if(abs(x-y) == 5 || abs(x-y) == 7) {
            y = x;
        }
        else {
            f=0;
        }
    }
    if(f) yes
    else no
}

signed main(){
    fst;
    int t = 1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
