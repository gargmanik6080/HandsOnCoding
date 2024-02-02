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

ll solve(){
    int n; cin>>n;
    bool neg=0;
    ll sm=0;
    ll mn = INT32_MAX;
    for(int i=0; i<n; i++){
        int x ; cin>>x;
    
        sm += abs(x);
        if(x<0) neg = !neg;
        if(abs(x) < mn) mn = abs(x);
    }
    if(neg == 0) return sm;
    else{
        return sm - 2*mn;
    }
    cout<<n<<"\n";
}

int main(){
    fst;
    cin.tie(NULL);
    int t = 1;
    cin>>t;

    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}
