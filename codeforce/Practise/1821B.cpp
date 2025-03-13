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
    vec v(n);
    vec v2(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++) cin>>v2[i];

    bool chg=0;
    int l=-1, r=-1;
    for(int i=0; i<n; i++) {
        if(v[i] != v2[i]){
            if(l == -1) l = i;
            r = i;
            chg = 1;
        }
    }

    if( chg ){
        while( l>0 ){
            if(v2[l] >= v2[l-1]) l--;
            else break;
        }
        while( r<n-1 ){
            if(v2[r] <= v2[r+1] ) r++;
            else break;
        }
    }
    else {
        int ml=0,mr=0,mx=0;
        l=0,r=0;
        for(int i=0; i<n-1; i++) {
            if(v2[i] <= v2[i+1]) r++;
            else{
                if(mr-ml < r-l) mr=r, ml=l;
                l=i+1,r=i+1;
            }
        }
        l = ml,r = mr;
    }

    cout<<l+1<<" "<<r+1<<endl;
    
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
