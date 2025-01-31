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

vec arr;
bool chk(int tar){

    for(int i=0; i<31; i++){
        int x = (tar&1);
        if(arr[i] == 0 && x == 1) return 0;
        if(tar)tar = tar>>1;
    }
    return 1;
}

bool solve(){
    int n; cin>>n;
    int t; cin>>t;
    vec v1(n);
    vec v2(n);
    vec v3(n);

    int ans=0,tar=t;
    arr.resize(32, 0);
    for(int i=0; i<31; i++){
        int x = (tar&1);
        arr[i] = x;
        if(tar)tar = tar>>1;
    }
    // unordered_map<int,bool>mp1;
    // unordered_map<int,bool>mp2;
    // unordered_map<int,bool>mp3;
    bool f=0;
    for(int i=0; i<n; i++){
        if(t == ans) f=1;
        cin>>v1[i];
        if(i != 0) v1[i] = ((v1[i-1])|(v1[i])) ;
        if(chk(v1[i])) ans = (ans|(v1[i]));
        if(t == ans) f= 1;
    }
    for(int i=0; i<n; i++){
        if(t == ans) f=1;
        cin>>v2[i];
        if(i != 0) v2[i] = ((v2[i-1])|(v2[i])) ;
        if(chk(v2[i])) ans = (ans|(v2[i]));
        if(t == ans) f= 1;
    }
    for(int i=0; i<n; i++){
        if(t == ans) f=1;
        cin>>v3[i];
        if(i != 0) v3[i] = ((v3[i-1])|(v3[i])) ;
        if(chk(v3[i])) ans = (ans|(v3[i]));
        if(t == ans) f= 1;
    }
    // cout<<ans<<" ";
    return f;
    
}

signed main(){
    fst;
    int t = 1;
    cin>>t;

    while(t--){
        if(solve()) yes
        else no
    }
    return 0;
}
