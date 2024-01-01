#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
using namespace std;

void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int ans=n, c=0;
    for(int i=0; i<n-1; i++){
        if(s[i] != s[i+1]) ans= ans+i+1;
        if(i>0 && s[i-1] == s[i+1]) c++;
    }
    cout<< ans-c<<"\n";
}

int main(){
    fst;
    cin.tie(NULL);
    int t;cin>>t;

    while(t--){
        solve();
    }
    return 0;
}