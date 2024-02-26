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
    // vector<string> v(n);
    int c=0;
    vec z(n);
    for(int i=0; i<n; i++){
        string s;cin>>s;
        int l = s.length()-1;
        c+=l+1;
        int ze=0;
        for(l; l>=0; l--){
            if(s[l] == '0') ze++;
            else break;
        }
        // cout<<ze<<" ";
        z[i] = ze;
    }

    sort(all(z));
    bool f=0;
    for(int i=n-1; i>=0; i--) {
        if(!f) c-=z[i], f=1;
        else f=0;
        // cout<<z[i]<<" ";
    }

    // cout<<c<<" ";
    if(c>m) cout<<"Sasha\n";
    else cout<<"Anna\n";
    // cout<<<<"\n";
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
