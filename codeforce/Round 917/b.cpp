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
    int ans=0, c=0;
    unordered_map<char, bool>mp;
    for(int i=0; i<n; i++){
        if(mp[s[i]] ==0) c++;
        ans+=c;
        mp[s[i]]=1;
    }
    cout<< ans<<"\n";
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