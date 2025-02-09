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
    vec v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));
    int ans=0;
    for(int i=1; i<n; i++){
        v[i]+=v[i-1];
    }

    for(int i=0;i<n && n-k-1+i >= 2*i-1 ; i++){
        int s1=0,s2=0;
        if(n-k+i-1 >=0 && n-k+i-1<n) s1 = v[n-k+i-1];
        // if(2*i+k-1 >=0 ) s1 = v[2*i+k-1];
        if(2*i-1 >= 0 && 2*i-1<n) s2 = v[2*i-1];
        // cout<< s1 << " "<<s2<<"  ";
        if(s2 > s1) break;
        int s = s1 - s2;
        ans = max(ans, s);
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
// 2 5 1 10 6
// 1 2 5 6 10
// 1 3 8 14 24