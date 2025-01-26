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
    int q; cin>>q;
    vec v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vec b(q);
    for(int i=0; i<q; i++){
        cin>>b[i];
    }
    // cout<<(1<<2)<<"  ";
    int mn=31;
    for(int i=0; i<q; i++){
        int tmp = b[i];
        if(tmp < mn) {
            for(int j=0; j<n; j++){
                if(v[j]%(1<<tmp)==0) {
                    v[j]+=(1<<(tmp-1));
                    // cout<<"fg";
                }
                // cout<<v[i]<<" "<<(1<<tmp)<<"  ";
            }
        }
        
        mn = min(mn, tmp);
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
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
