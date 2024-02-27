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
    long long ans=0;
    bool m1 = 0;
    bool m2 = 0;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        ans+=(x);
        ans = ans%3;
        if(x%3 == 1) m1=1;
        else if(x%3 == 2) m2=1;
    }
    if(ans%3 == 0 )cout<<0<<"\n";
    else if((ans%3 == 2)|| (ans%3 == 1 && m1)) cout<<1<<"\n";
    else cout<<2<<"\n";
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
