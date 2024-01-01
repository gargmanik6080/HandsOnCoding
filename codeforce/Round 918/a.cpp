#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
using namespace std;

void solve(){
    int n; cin>>n;
    int a; cin>>a;
    int b; cin>>b;
    if(a==b) cout<<n;
    else if(b==n) cout<<a;
    else if(a==n) cout<<b;
    cout<<"\n";
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