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
    for(int i=0; i<n; i++) cin>>v[i];
    // sort(all(v));
    vec pre(n);
    vec post(n);
    for(int i=0; i<n; i++){
        if(i==0) pre[i]=v[i], post[n-i-1]=v[n-i-1];
        else {
            pre[i] = pre[i-1] + v[i];
            // post[n-i-1] = post[n-i] + v[n-i-1];
        }
    }

    int mx=0,mn=0;
    int ans=0;
    // for(int i=1; i<n; i++){
    //     if(n%i != 0) continue;
    //     int tmp = abs(post[n-i] - pre[i-1]);
    //     if(mx < tmp) mx = tmp;
    //     cout<<tmp<<" ";
    // }
    for(int i=1; i<n; i++){
        if(n%i != 0) continue;
        // int k=n/i;
        for(int j=0; j<n; j+=i){
            if(j==0){
                mx = pre[i-1];
                mn = pre[i-1];
            }
            else{
                mx = max(mx, pre[j+i-1] - pre[j-1]);
                mn = min(mn, pre[j+i-1] - pre[j-1]);
            }
            ans = max(ans, abs(mx - mn));
            // cout<<i<<" "<<ans<<"  ";
        }
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

// 1 2 3 3 6 10