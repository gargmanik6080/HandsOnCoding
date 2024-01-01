#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
using namespace std;

void solve(){
    int n; cin>>n;
    vector<vector<int>> v(n, vector<int>(2,0));
    for(int i=0; i<n; i++){
        cin>>v[i][0]>>v[i][1];
    }
    int ans=0;
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++){
        int x=v[i][1];
        for(int j=i+1; j<n; j++){
            if(v[j][1] < x) ans++;
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