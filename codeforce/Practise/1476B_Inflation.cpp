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
    int k; cin>>k;
    vec v(n);
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum+=v[i];
    }

    long long ans=0;
    for(int i=n-1; i>0; i--){
        sum-=v[i];
        long long tmp = ceil((v[i]*100.0)/k);
        if(tmp > sum) ans+=tmp-sum, sum+=(tmp-sum);
    }

    cout<<ans<<"\n";
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
