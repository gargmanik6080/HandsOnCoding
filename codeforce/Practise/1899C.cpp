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
    vec v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int mn=v[0],mx=v[0], j=0, sm=v[0],ans=v[0];
    for(int i=1; i<n; i++){
        if(abs(v[i-1])%2 == abs(v[i])%2 || sm<0){
            mx = v[i];
            mn = v[i];
            sm = v[i];
            j=i;
            // cout<<"no";
        }
        else{
            mn = min(mn, sm);
            mx = max(mx, sm);
            sm += v[i];
        }
        // cout<<sm<<" "<<mx<<" "<<mn<<"  ";
        ans = max(ans, mx);
        ans = max(ans, sm);
        if(i != j) ans = max(ans, mx-mn);
        // if(ans == 13 ) cout<<i<<" "<<sm<<" "<<mx<<" "<<mn<<"   ";
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
