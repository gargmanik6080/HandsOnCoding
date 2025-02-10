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

int solve(){
    string s; cin>>s;
    int n = s.length();
    for(int i=1; i<n; i++){
        if(s[i-1] == s[i]) return 1;
    }
    
    return n;
}

signed main(){
    fst;
    int t = 1;
    cin>>t;

    while(t--){
        cout<<solve()<<endl;;
    }
    return 0;
}
