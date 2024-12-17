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
    unordered_map<int, bool>mp;
    // bool vis[n+1] = {0};
    vec v(n);
    vec ans(n, -1);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(!mp[v[i]]) {
            mp[v[i]]=1;
            ans[i] = v[i];
        }
        else {
            bool f = 0;
            for(int j=1; j<=n; j++){
                if(!mp[j]){
                    mp[j]=1;
                    ans[i] = j;
                    f=1;
                // cout<<"yes "<<j<<" ";
                    break;
                }
            }
            if(!f) {
                for(int j=1; j<=n; j++) mp[j] = 0;
                mp[v[i]]=1;
                ans[i] = v[i];
            }
        }
    }
    for( int i: ans) cout<<i<<" ";
    cout<<endl;
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
