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


void surr(int i,int j){
    if(i==-1 || i==n || j==-1 || j==m) return ;
    if(mp[i][j]==1) return ;
    if(v[i][j]=='0') return ;
    mp[i][j]=1;
    
    surr(i,j+1);
    surr(i,j-1);
    surr(i+1,j);
    surr(i-1,j);
}
void solve(){
    int n; cin>>n;
    
    cout<<n<<"\n";
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
