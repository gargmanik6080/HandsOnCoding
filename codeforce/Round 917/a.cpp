#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
using namespace std;

void solve(){
    int n;cin>>n;
    int neg=0, z=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x < 0) neg++;
        else if(x == 0) z=1;
    }
    if(z != 0) cout<<0<<"\n";
    else if(neg == 0 ){
        cout<<1<<"\n";
        cout<<1<<" "<<0<<"\n";
    }
    else {
        if(neg%2 == 1) {
            cout<<0<<"\n";
        }
        else{
            cout<<1<<"\n";
            cout<<1<<" "<<0<<"\n";
        }
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