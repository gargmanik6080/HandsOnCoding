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
    int n;
    cin >> n;
    vector<int> a(n + 2);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    set<int> lft, cur;
    for (int i = 0; i < n + 2; ++i) {
      lft.insert(i);
      cur.insert(i);
    }
    for (int z = 0; z < n; ++z) {
      set<int> del, ncur;
      for (int i : cur) {
        auto it = lft.find(i);
        if (it == lft.end()) continue;
        int prv = *prev(it);
        int nxt = *next(it);
        if (a[prv] > a[*it]) {
          del.insert(prv);
          a[i] += a[prv];
          ncur.insert(i);
        }
        if (a[nxt] > a[*it]) {
          del.insert(nxt);
          a[i] += a[nxt];
          ncur.insert(i);
        }
      }
      cout << del.size() << ' ';
      for (auto it : del) lft.erase(it);
      cur = ncur;
    }
    cout << '\n';
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
