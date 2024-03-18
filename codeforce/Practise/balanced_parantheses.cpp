#include<iostream>
#include <bits/stdc++.h>

using namespace std;


long long ans=0;
void hp(int n, int i, int l){
    if(i == n) {
        ans++;
        return ;
    }
    if(l > 0) hp(n, i+1, l-1);
    if(i+l+2 <= n) {
        hp(n, i+1, l+1);
    }
}
int main() {
    int n; cin>>n;
    hp(2*n, 0, 0);
    cout<<ans<<"\n";
}
