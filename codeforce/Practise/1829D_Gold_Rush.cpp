// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    int tar; cin>>tar;
    if(n < tar) {
        no
        return ;
    }
    queue<int>q;
    q.push(n);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x == tar) {
            yes
            return ;
        }
        if(x%3 !=0 || x == 0) continue;
        q.push(x/3);
        q.push(2*(x/3));
    }
    no
    // cout<<n<<"\n";
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
