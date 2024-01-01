#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n;cin>>n;
    int k;cin>>k;
    int t;cin>>t;
    int r; cin>>r;
    int rkt = r*k*t;
    vector<vector<float>> sinr(rkt);
    for(int i=0; i<rkt; i++){
        vector<float>v(n);
        for(int j=0; j<n; j++)cin>>v[j];
        sinr[i] = v;
    }
    // cout<<"one\n";
    int nrk = n*k*r ;
    vector<vector<float>> intfac(nrk);
    for(int i=0; i<nrk; i++){
        vector<float>v(n);
        for(int j=0; j<n; j++)cin>>v[j];
        intfac[i] = v;
    }
    // cout<<"two\n";
    int j; cin>>j;
    vector<vector<int>> frame(j, vector<int>(5));
    for(int i=0; i<j; i++){
        for(int k=0; k<5; k++) cin>>frame[i][k];
    }
    // cout<<"Three\n";
    
    cout<<"\n";
}

int main(){
    // fst;
    // cin.tie(NULL);
    solve();
    return 0;
}