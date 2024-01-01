#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes {cout<<"Yes\n";}
#define no {cout<<"No\n";return ;}
using namespace std;

void solve(){
    int n; cin>>n;
    int k; cin>>k;
    if( k%2==1 )no
    int d = k/n;
    int left = k - n*d;
    if(left %4 != 0) no
    // int p = pow(left, 0.5);
    // cout<<p<<" ";
    // if(n%2 == 0 || k==0){
    yes
    for(int i=0; i<n; i++){
        int d2=d;
        if(d2 < n-1 && left > 1) d2+=2, left-=2;
        for(int j=0; j<n; j++){
            if(d2 > 0){
                cout<<1<<" ";
                d2--;
            }
            else cout<<0<<" ";
        }
        cout<<"\n";
    }
    // }
    // else{
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<n; j++){
    //             if(d > 0){
    //                 cout<<1<<" ";
    //             }
    //             else cout<<0<<" ";
    //         }
    //         cout<<"\n";
    //         d--;
    //     }
    // }
}

int main(){
    fst;
    cin.tie(NULL);
    int t;cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
/*

10 6  => 0
10 8  -> 1
10 28 -> 1
10 42 -> ?

*/