#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include "bits/stdc++.h"

#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            emp                emplace_back
#define          sz(a)               (int)a.size()
#define vec vector<int>
#define rep(a,b) for (int i = a; i < b; i++)
#define ll long long int

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

const int MOD = 1e+7;

using namespace std;

void solve(){
    int n; cin>>n;
    vector<vector<int>> a(n);
    vector<vector<int>> b(n);
    vector<vector<int>> c(n);
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a[i] = {x, i};
    }
    for(int i=0; i<n; i++){
        int x; cin>>x;
        b[i] = {x, i};
    }
    for(int i=0; i<n; i++){
        int x; cin>>x;
        c[i] = {x, i};
    }
    sort(rall(a));
    sort(rall(b));
    sort(rall(c));
    int s=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(a[i][1] != b[j][1] && b[j][1] != c[k][1] && a[i][1] != c[k][1]) s = max(s, (a[i][0]+b[j][0]+c[k][0]));
            }
        }
    }
    cout<<s<<"\n";
}

int main(){
    fst;
    int t = 1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
