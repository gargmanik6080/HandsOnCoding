#include<iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<long long >>dp;
long long hp(int n, int i,int l){
    if(i == n) {
        // v.emplace_back(tmp);

        return 1;
    }
    if(i>n) return 0;
    // hp(n, i+2, tmp + "()", l);
    long long  a=0,b=0;
    if(dp[i][l] != -1) return dp[i][l];
    if(l > 0) a = hp(n, i+1,  l-1);
    if(i+l+2 <= n) {
        b = hp(n, i+1, l+1);
    }
    return dp[i][l] = a+b;
}
int main(){
    int n; cin>>n;
    dp.assign(n*2, vector<long long>(n*2, -1));
    cout<<hp(2*n, 0, 0)<<"\n";
    
}