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
    int k; cin>>k;
    unordered_map<int, bool>mp1;
    unordered_map<int, bool>mp2;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        mp1[x]=1;
    }
    for(int i=0; i<m; i++){
        int x; cin>>x;
        mp2[x]=1;
    }
    int l=0,r=0, c=0;
    for(int i=1; i<=k; i++){
        if(mp1[i] && mp2[i]) c++;
        else if(mp1[i] == 1) l++;
        else if(mp2[i] == 1) r++;
        else {
            // cout
            no
            return;
        }
    }
    int tmp = (k/2 - l);
    int tmp2 = (k/2 - r);
    // cout<<tmp<<" "<<tmp2<<"  ";
    if(tmp + tmp2 <= c && (tmp >= 0) && (tmp2 >= 0)) yes
    else no
    
    // cout<<n<<"\n";
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
