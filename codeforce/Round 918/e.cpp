#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";return ;
#define no cout<<"NO\n";return ;
using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n];
    arrin;
    long odd=0, eve=0;
    int oi=1, ei=0;
    for(int i=0; i<n; i++){
        if(i%2 == 0) eve+=arr[i];
        else odd+=arr[i];

        if(eve == odd) yes
        else if(even > odd && i%2==1) eve-=arr[i-ei],ei+=2;
    }
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