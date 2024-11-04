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
    int k; cin>>k;
    vector<vector<int>> v;
    unordered_map<int, int>mp;
    for(int i=0; i<k; i++){
        int x;int y;
        cin>>x>>y;
        mp[x]+=y;
    }
    int j=0;
    int ans=0;
    for(auto i: mp){
        v.push_back({i.second, i.first});
        // cout<<i.second<<" "<< i.first<<"  ";
    }
    sort(rall(v));

    int m = v.size();
    for(int i=0; i<n && i<m; i++){
        ans+=v[i][0];
        // cout<<v[i][0];
    }

    cout<<ans<<"\n";
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
