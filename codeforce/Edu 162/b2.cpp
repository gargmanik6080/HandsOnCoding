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
int a[300005];
int x[300005];
void solve(){
    int n,k;
     cin>>n>>k;
        for(int i=1;i<=n;i++)cin>>a[i];
        multiset<pair<int,int>> st;
        for(int i=1;i<=n;i++)cin>>x[i],st.insert({abs(x[i]),a[i]});
        int go=0;
        bool fl=1;
        while(!st.empty()){
            int cur=k;
            while(!st.empty()&&cur>0){
                pair<int,int> p=*st.begin();
                if(p.first-go<=0){fl=0;}
                st.erase(st.begin());
                if(cur>=p.second){
                    cur-=p.second;
                }
                else{
                    st.insert({p.first,p.second-cur});
                    cur=0;
                    break;
                }
            }
            go++;
        }
        cout<<(fl?"YES\n":"NO\n");
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
