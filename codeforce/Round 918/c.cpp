#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    long long ans=0;
    for(int i=0; i<n; i++) {
        long long x; cin>>x;
        ans+=x;
    }
    long long z = sqrt(ans);
    if(ans == z*z) yes
    else no;
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