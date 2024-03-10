#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include "bits/stdc++.h"

#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            emp                emplace_back
#define          sz(a)               (int)a.size()
#define vec vector<int>
#define rep(a,b) for (int i = a; i < b; i++)
#define ll long long int
#define int long long
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

const int MOD = 1e+7;

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    rep(0, n){
        cin>>a[i];
    }
    for(int i=1;i<LONG_LONG_MAX/2; i*=2){
        set<int>mp;
        for(int j=0; j<n; j++) mp.insert(a[j]%i);
        if(mp.size() == 2) {
            cout<<i<<"\n";
            return ;
        }
    }
    cout<<1e17<<"\n";
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
