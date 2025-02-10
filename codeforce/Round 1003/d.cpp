#pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include "bits/stdc++.h"

#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            emp                emplace_back
#define          sz(a)               (int)a.size()
#define vec vector<int>
#define rep(a,b) for (int i = a; i < b; i++)
#define int long long

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

const int MOD = 1e9+7;

using namespace std;

void solve(){
    int n; cin>>n;
    int m; cin>>m;
    vector<vector<int> > v(n, vector<int>(m));
    vector<vector<int> > sum(n, vector<int>(2));
    for(int i=0; i<n; i++){
        int s=0, pre=0;
        for(int j=0;j<m; j++) {
            cin>>v[i][j];
            s+=v[i][j];
            pre += s;
        }
        // sum[i]=s;
        sum[i][0]=s;
        sum[i][1]=pre;
    }
    sort(rall(sum));
    int ans=0, curr=0;
    for(int i=0; i<n; i++){
        // curr += sum[i][0];
        ans  += sum[i][1] + sum[i][0]*i;
    }
    cout<<ans<<endl;
}

signed main(){
    fst;
    int t = 1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
