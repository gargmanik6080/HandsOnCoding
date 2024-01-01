#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
using namespace std;

void solve(){
    char ans;
    for(int i=0; i<3; i++){
        bool a=0, b=0, c=0;
        for(int j=0; j<3; j++){
            char c2;
            cin>>c2;
            if(c2=='A') a=1;
            else if(c2=='B') b=1;
            else if(c2=='C') c=1;
            // cout<<c2<<" ";
        }
        if(a != 1 || b!= 1 || c!= 1) {
            if(a==0) ans='A';
            else if(b==0) ans='B';
            else if(c==0) ans='C';
        }
    }
    cout<<ans<<"\n";
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