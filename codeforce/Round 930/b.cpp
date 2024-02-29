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
    string a; cin>>a;
    string b; cin>>b;
    string mn = string(n+1, '1');
    unordered_map<string, int>mp;
    string pre=string(n, '\0');
    const char* c = b.c_str();
    for(int i=0; i<n; i++){
        pre+=a[i];
        string tmp = pre + c;
        // b.erase(0, 1);
        // b = (b.begin()+1);
        c++;
        // cout<<c<<" ";
        mn = min(mn, tmp);
        mp[tmp]++;
    }
    cout<<mn<<"\n"<<mp[mn]<<"\n";
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
