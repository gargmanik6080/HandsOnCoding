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

const int MOD = 1e9+7;

using namespace std;

void solve(){
    int n; cin>>n;
    vec v1(n);
    vec v2(n);
    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<n; i++) cin>>v2[i];
    sort(all(v1));
    sort(all(v2), greater<int>());
    int ans=1;
    for(int i=0; i<n; i++) {
        int ub = v1.size() - (upper_bound(v1.begin(), v1.end(), v2[i]) - v1.begin());
        ans= ans*max(ub - i, 0ll)%MOD;
    }
    // cout<<"   ";
    // for(int i=0; i<n; i++) cout<<v1[i]<<" ";
    cout<<ans%MOD<<endl;
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
// 2 4 5 6 8 9
// 2 4 5 0 0 9
// 1 1 3 4 5 6 
// 
