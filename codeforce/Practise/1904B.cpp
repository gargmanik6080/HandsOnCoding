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
    vec b(n);
    vec pre(n);
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    b = v;
    sort(all(v));

    pre[0] = v[0];
    for(int i=0; i<n; i++){
        if(i!=0) pre[i] += pre[i-1] + v[i];
        mp[v[i]] = i;
    }

    for(int i=0; i<n; i++){
        int val = b[i];
        val = pre[mp[val]];
        while(true){
            auto it = upper_bound(all(v), val);
            if(it==v.end()) {
                cout<<n-1<<" ";
                break;
            }
            else{
                int fnd = *(--it);
                if(pre[mp[fnd]] <= val) {
                    cout<<mp[fnd]<<" ";
                    break; 
                }
                else {
                    val = pre[mp[fnd]];
                }
            }
        }
    }
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
