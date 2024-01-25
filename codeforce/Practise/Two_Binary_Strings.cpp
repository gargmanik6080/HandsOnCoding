#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long int
using namespace std;

void solve(){
    string a; cin>>a;
    string b; cin>>b;
    int n = a.length();
    vector<int> z;
    vector<int> o;
    for(int i=0; i<n; i++){
        if(a[i] == '0' && b[i] == '0') z.emplace_back(i);
        else if(a[i] == '1' && b[i] == '1') o.emplace_back(i);
    }
    for(int i : z){
        if(*upper_bound(o.begin(), o.end(), i) == i+1) {
            yes
            return ;
        }
    }
    no
}

int main(){
    fst;
    cin.tie(NULL);
    int t = 1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
