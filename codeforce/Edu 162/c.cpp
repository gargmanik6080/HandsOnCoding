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
int findCount(vector<int> &freq,int l,int r) 
{ 
    if(l==0) 
    { 
        return freq[r]; 
    } 
    return freq[r]-freq[l-1]; 
} 
 
int st[1000001][20]; 
  
void buildsparse(int arr[], int N) 
{ 
    for (int i = 0; i < N; i++) 
        st[i][0] = arr[i]; 
  
    for (int j = 1; j <= 20; j++) 
        for (int i = 0; i + (1 << j) <= N; i++) 
            st[i][j] = st[i][j - 1]+st[i + (1 << (j - 1))][j - 1]; 
} 
  
 
int query(int L, int R) 
{ 
     
    int sum=0; 
    for (int j = 20; j >= 0; j--) 
    { 
        if ((1 << j) <= R - L + 1) 
        { 
            sum += st[L][j]; 
  
            L += 1 << j; 
        } 
    } 
    return sum; 
} 
void solve(){
        int n, q; 
        cin >> n >> q; 
        int arr[n]; 
        for (int i = 0; i < n; i++) 
        { 
            cin >> arr[i]; 
        } 
        vector<int> freq(n, 0); 
        for (int i = 0; i < n; i++) 
        { 
            if (i != 0) 
            { 
                freq[i] = freq[i - 1]; 
            } 
            if (arr[i] == 1) 
            { 
                freq[i]++; 
            } 
        } 
         
        buildsparse(arr,n); 
        while(q--) 
        { 
            int l,r; 
            cin>>l>>r; 
            l--; 
            r--; 
            if(l==r) 
            { 
                cout<<"NO"<<endl; 
                continue; 
            } 
            if(findCount(freq,l,r)==0) 
            { 
                cout<<"YES"<<endl; 
                continue; 
            } 
            int cnt=findCount(freq,l,r); 
            int sumOfRest=query(l,r)-cnt; 
            int cntOfRest=r-l+1-cnt; 
            if(cnt<=sumOfRest-cntOfRest) 
            { 
                cout<<"YES"<<endl; 
                continue; 
            } 
            cout<<"NO"<<endl; 
        }

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
