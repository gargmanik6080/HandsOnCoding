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
    vec left(n,-1);
    for(int i=1; i<n; i++){
        if(v[i] != v[i-1]) left[i] = i-1;
        else left[i] = left[i-1];
    }

    int q; cin>>q;
    for(int i=0; i<q; i++){
        int l; cin>>l;l--;
        int r; cin>>r;r--;
        
        if(left[l] == left[r]) cout<<"-1 -1\n";
        else if(v[l] != v[r]) cout<<l+1<<" "<<r+1<<"\n";
        else cout<<l+1<<" "<<left[r]+1<<"\n";
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
