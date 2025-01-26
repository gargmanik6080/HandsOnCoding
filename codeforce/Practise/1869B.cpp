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

// Get AB, Get min(AK1) + min(K2B)
void solve(){
    int n; cin>>n;
    int k; cin>>k;
    int a; cin>>a;a--;
    int b; cin>>b;b--;

    vector<vec> v(n, vec(2));
    for(int i=0; i<n; i++){
        cin>>v[i][0]>>v[i][1];
    }
    int ans=abs(v[b][0] - v[a][0]) + abs(v[b][1] - v[a][1]);
    int mna=LLONG_MAX/2;
    int mnb=LLONG_MAX/2;
    for(int i=0; i<k; i++){
        //for A
        int d = abs(v[i][0] - v[a][0]) + abs(v[i][1] - v[a][1]);
        mna = min(mna, d);

        //for B
        d = abs(v[i][0] - v[b][0]) + abs(v[i][1] - v[b][1]);
        mnb = min(mnb, d);
    }

    ans = min(ans, mna+mnb);
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
