#pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>

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
    int a; cin>>a;
    int b; cin>>b;
    int c; cin>>c;

    int ans=0;
    int t1=n;
    int t2=n;

    ans+= max((int)0, min(t1, a));
    ans+= max((int)0, min(t2, b));

    t1 = max((int)0, min(t1, a));
    t2 = max((int)0, min(t2, b));

    int x = min(n - t1, c);
    ans+=x;
    c-=x;

    x = min(n - t2, c);
    ans+=x;
    c-=x;
    
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
