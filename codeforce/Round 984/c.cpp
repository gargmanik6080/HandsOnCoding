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

string s;
int len=0;
bool chk(int i, char y){
    if(y == '0'){
        if(i < 1) return 0;
        if(s[i-1] == '1' && s[i-2]=='1' && i+1<len && s[i+1] == '0') return 1;
        if(i>2 && s[i-1] == '0' && s[i-2]=='1'  && s[i-3] == '1') return 1;
    }
    else {
        if(i+2 > len) return 0;
        if(i>0 && s[i-1] == '1' && i+2<len && s[i+1]=='0' && s[i+2] == '0') return 1;
        if(s[i+1] == '1' && s[i+2]=='0'  && s[i+3] == '0') return 1;
    }
    return 0;
}
void solve(){
    cin>>s;
    len = s.length();
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x,y; cin>>x>>y;
        s[x]=y;
        if(chk(x, y)) yes
        else no
    }
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
