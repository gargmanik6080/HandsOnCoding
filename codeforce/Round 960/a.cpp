#pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include "bits/stdc++.h"

#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            emp                emplace_back
#define          sz(a)               (int)a.size()
#define vec vector<int>
#define rep(a,b) for (int i = a; i < b; i++)
#define int long long

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

const int MOD = 1e+7;

using namespace std;

void solve(){
    int n; cin>>n;
    int mx=0, mx2=0;
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        int x;cin>>x;
        mp[x]++;
        if(x > mx) {
            mx = x;
            mx2 = mx;
        }
        else if(x > mx2) mx2 = x;
    }
    for(auto i:mp) {
        if(i.second%2 ==1) {
            yes
            return ;
        }
    }
    no
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
