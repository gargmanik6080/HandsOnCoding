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

void printInt128(__int128 value) {
    if (value < 0) {
        putchar('-');
        value = -value;
    }
    if (value > 9) {
        printInt128(value / 10);
    }
    putchar((value % 10) + '0');
}


void solve(){
    int n; cin>>n;
    int c; cin>>c;
    vec v(n);
    int s=0;
    int ss=0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        s+=v[i];
        c-=(v[i]*v[i]);
    }

    // cout<<s<<" ";
    __int128 root = (__int128)n*((__int128)c);
    // printInt128(root);
    // cout<<"  ";

    root = sqrt((long double)s*s + root);
    root = (root-s)/n;
    // printInt128(root);
    // cout<<"  ";
    int ans = (long long) (root/2);
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
