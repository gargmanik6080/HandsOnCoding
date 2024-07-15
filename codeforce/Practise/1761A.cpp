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

#define yes cout<<"YES\n"
#define no cout<<"NO\n"

const int MOD = 1e+7;

using namespace std;

void solve(){
    int n; cin>>n;
    int a,b; cin>>a>>b;
    if(n==a && a==b) yes;
    else if(a+b == n) no;
    else if(a+b+1 == n) no;
    else if(a+b < n) yes;
    else no ;
    // cout<<n<<"\n";
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
