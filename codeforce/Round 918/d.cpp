#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
using namespace std;

bool con(char c){
    if(c == 'b' || c =='c' || c =='d') return 1;
    return 0;
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    unordered_map<int, bool>mp;
    for(int i=n-1; i>=0; i--){
        if(con(s[i])){
            mp[i] = 1;
            i-=2;
        }
        else{
            mp[i] = 1;
            i--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<s[i];
        if(mp[i] == 1 && i!=n-1) cout<<".";
    }
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