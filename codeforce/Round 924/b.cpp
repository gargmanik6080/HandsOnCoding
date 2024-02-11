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

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

const int MOD = 1e+7;

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    int c=0,mx=1, mx2=0;
    unordered_map<int, bool> mp;
    for(int i=1; i<n; i++){
        int d = v[i]-v[i-1];
        if(d < n && d>0 && mp[d]==0){
            mp[d] = 1;
            // cout<<v[i]<<" "<<v[i-1]<<"  ";
        }
        if(v[i]-v[i-1] == 1) {
            c++;
        }
        else {
            mx2 = max(mx2, c);
        }
        mx2 = max(mx2, c);
        // else if(i<n-1 && v[i]+1 == v[i+1]) c++;
        // else{
        //     mx = max(mx, c);
        //     c=0;
        // }
        // mx = max(mx, c);
    }
    // int c2=;
    // for(int i=0; i<n+1; i++){
    //     if(mp[i]){
    //         c2++;
    //     }
    //     else{
    //         mx = max(mx, c2);
    //         c2=0;
    //     }
    //     mx = max(mx, c2);
    // }
    cout<<max( (int)mp.size(), c+1)<<"\n";
}
int main(){
    fst;
    int t = 1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
