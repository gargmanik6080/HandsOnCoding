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
    string s; cin>>s;
    s = s+s;
    int n=s.length();
    int c=0, mx=0;
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            mx = max(mx, c);
            c = 0;
        }
        else c++;
    }
    mx = max(mx, c);
    if(mx >= n/2) {
        cout<<n*n/4<<endl;
        return;
    }
    else if(mx == 0) {
        cout<<0<<endl;
        return ;
    }
    // mx = min(n/2, mx);
    // cout<<mx<<" "<<ceil((mx+1)*0.5)<<" "<<floor((mx+1)*0.5)<<" ";
    int ans = ceil((mx+1)*0.5)*floor((mx+1)*0.5);
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
