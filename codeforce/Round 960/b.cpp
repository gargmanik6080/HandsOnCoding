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
    int sum=0;
    vec v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int x=0;
    while(true){
        int mx=0, tsum=0;;
        unordered_map<int, bool>mp;
        for(int i=x; i<n; i++){
            tsum+=v[i];
            if(mx < v[i] && mp[v[i]]) mx = v[i];
            mp[v[i]] = 1;
            v[i] = mx;
            if(mx==0) x++;
            // cout<<mx<<" ";
        }
        // x++;
        sum += tsum;
        if(tsum==0) break;
    }
    cout<<sum<<"\n";
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
