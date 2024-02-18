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
    int m; cin>>m;
    long long pro=1;
    vec v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        pro = (pro*v[i])%m;
    }
    int l=0, r=n-1;
    for(int i=0; i<n; i++){
        cout<<pro%m<<" ";
        char c; cin>>c;
        if(c == 'L') {
            pro = (pro*v[l])%m;
            l++;
        }
        else if(c == 'R'){
            pro = (pro*v[r])%m;
            r--;
        }
    }
    cout<<"\n";
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