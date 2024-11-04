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

const int MOD = 1e+7;

using namespace std;

void solve(){
    int n; cin>>n;
    int m; cin>>m;
    int ans=0;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }

    char c='r';
    int l=0,r=v[0].size()-1,u=0,d=v.size()-1, t=(r+1)*(d+1);
    int j=0,k=0;
    bool f=1;
    string tar="1543";
    string s= "";
    for(int i=0;i<t;i++){

        s+=v[k][j];
        if(c=='r'){
            if(j==r)c='d',f=0,u++;
            else j++;
        }
        else if(c=='d'){
            if(k==d) c='l',f=0,r--;
            else k++;
        }
        else if(c=='l'){
            if(j==l) c='u',f=0,d--;
            else j--;
        }
        else if(c=='u'){
            if(k==u) {
                c='r',f=0,l++;
                if(s.length()>1) s+= s.substr(0, 3);
                // cout<<s<<"  ";
                std::string::size_type pos = 0;
                while ((pos = s.find(tar, pos )) != std::string::npos) {
                    ++ans;
                    pos += 4;
                }

                s="";
            }
            else k--;



        }
        if(!f){
            if(c=='r') j=l;
            else if(c=='l') j=r;
            else if(c=='u') k=d;
            else if(c=='d') k=u;
            f=1;
            // cout<<l<<" "<<r<<" "<<u<<" "<<d<<"  ";
        }
    }

    if(s.length()>1) s+= s.substr(0, 3);
    // cout<<s<<"  ";
    std::string::size_type pos = 0;
    while ((pos = s.find(tar, pos )) != std::string::npos) {
        ++ans;
        pos += 4;
    }
    cout<<ans<<"\n";
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
