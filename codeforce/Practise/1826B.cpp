#pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include "bits/stdc++.h"
#include <numeric>

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
    vec v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(n == 1) {
        cout<<0<<endl;
        return ;
    }
    int ans=-1;
    for(int i=0; i<n/2; i++){
        if(v[i] == v[n-i-1]) continue;
        int diff = max(v[i], v[n-i-1]) - min(v[i], v[n-i-1]);
        // cout<<diff<<" ";
        if(ans != -1)ans = gcd(ans, diff);
        else ans = diff;
    }

    if(ans == -1) cout<<0<<endl;
    else cout<<ans<<endl;
    
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
