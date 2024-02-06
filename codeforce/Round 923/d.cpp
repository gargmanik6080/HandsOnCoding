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
    vec v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int q; cin>>q;
    for(int i=0; i<q; i++){
        // cout<<"??";
        int l; cin>>l;l--;
        int r; cin>>r;r--;
        bool f=0;
        for(int j=l+1; j<=r; j++){
            if(v[j] != v[l]) {
                f=1;
                cout<<l+1<<" "<<j+1<<"\n";
                break;
            }
        }
        if(!f) cout<<"-1 -1\n";
    }
    cout<<"\n";
}

int main(){
    fst;
    int t ;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
