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
    vec a(n);vec b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int i=0;int mx=-1;int ans=0;int ans2=0;
    // while(k){
    //     if(i<n && a[i] > mx) ans+=a[i];
    //     else {
    //         ans+=mx;
    //         cout<<ans<<" ";
    //     }
    //     if(i<n)mx = max(mx, b[i]);
    //     --k;
    //     ++i;
    // }
    int j=0;
    int it=min(n, k);
    vec dp(it,0);
    vec mxa(it,0);
    for(int i=0; i<it; i++){
        ans+=a[i];
        dp[i]=ans;
        
        if(mx < b[i]) mx = b[i];
        mxa[i] = mx;
    }

    ans=0;
    for(int i=0; i<it; i++){
        ans = max(ans, (dp[i] + (mxa[i]*(k-i-1))));
    }
    cout<<ans<<endl;
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
