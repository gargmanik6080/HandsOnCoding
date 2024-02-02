#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#include "bits/stdc++.h"
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            emp                emplace_back
#define          sz(a)               (int)a.size()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long int
const int MOD = 1000000007;

using namespace std;

bool chk(string s, string t, int n){
    int j=0;
    for(char i : s) {
        if(i == t[j]) j++;
        if(j == n) return 1;
    }
    return 0;
}
void solve(){
    int n; cin>>n;
    int k; cin>>k;
    int m; cin>>m;
    string s; cin>>s;
    if(n%k == 0){
        cout<<n/k<<endl;
        return;
    }
    string res="";
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            string tmp="";
            tmp+=(j+'a');
            for(int z=0; z<k; z++){
                if(j == z) continue;
                tmp+= (z+'a');
            }
            cout<<tmp<<"  ";
            // if(chk())
        }
    }
    cout<<"\n";
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
