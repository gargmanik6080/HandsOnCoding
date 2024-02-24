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
    int k; cin>>k;
    vec v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vec x(n);
    for(int i=0; i<n; i++) cin>>x[i];
    stack<vector<int>> l;
    queue<vector<int>> r;
    for(int i=0; i<n; i++){
        if(x[i] < 0) l.push({v[i],0-x[i]});
        else r.push({v[i], x[i]});
    }
    int ex=0;
    int t=0;
    while(!l.empty() && !r.empty()){
        int l1 = l.top()[0];
        int lx = l.top()[1];
        int r1 = r.front()[0];
        int rx = r.front()[1];

        if(rx <= t){
            if(r1>ex) {
                no;
                return ;
            }
            else r1 = 0, ex-=r1;
        }
        if(lx <= t){
            if(l1>ex) {
                no;
                return ;
            }
            else l1 = 0, ex-=l1;
        }
        
        if(lx <= rx){
            if(l1<=k){
                ex+= (k-l1);
                l1-=k;
            }
            else{
                if(k+ex < l1) {
                    no;
                    return ;
                }
                else {
                    l1 -= k;
                    ex -= (l1);
                }
            }
            l.pop();
        }
        else {
            if(r1<=k){
                ex+= (k-r1);
                r1-=k;
            }
            else{
                if(k+ex < r1) {
                    no;
                    return ;
                }
                else {
                    r1 -= k;
                    ex -= (r1);
                }
            }
            r.pop();
        }
        t++;
    }

    while(!l.empty()){
        int l1 = l.top()[0];
        int lx = l.top()[1];
        if(lx < t){
            if(l1>ex) {
                no;
                return ;
            }
            else l1 = 0, ex-=l1;
        }
        if(l1<=k){
                ex+= (k-l1);
                l1-=k;
            }
        else{
            if(k+ex < l1) {
                no;
                return ;
            }
            else {
                l1 -= k;
                ex -= (l1);
            }
        }
        l.pop();
        t++;
    }
    while(!r.empty()){
        int r1 = r.front()[0];
        int rx = r.front()[1];

        if(rx <= t){
            if(r1>ex) {
                no;
                return ;
            }
            else r1 = 0, ex-=r1;
        }
        if(r1<=k){
            ex+= (k-r1);
            r1-=k;
        }
        else{
            if(k+ex < r1) {
                no;
                return ;
            }
            else {
                r1 -= k;
                ex -= (r1);
            }
        }
        r.pop();
        t++;
    // cout<<ex<<"  ";
    }
    yes;

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
