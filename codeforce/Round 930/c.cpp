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
    long long ans=1,res=2;
    string s="";s+=a[0];
    bool f=0, f2=0;
    for(int i=0; i<n-1; i++){
        if(!f && a[i+1]=='1' && b[i]=='0'){
            f=1;
        }
        if(!f && !f2 && i<n-1 && a[i+1]==b[i]) ans+=2, f2=1;
        else f2=0;
        // if(a[i+1] == '0' && b[i+1] == '0') ans*=2;
        if(!f) s += min(a[i+1], b[i]);
        else s+=b[i];
    }
    s+=b[n-1];
    // cout<<n<<"\n";
    cout<<s<<"\n";
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
