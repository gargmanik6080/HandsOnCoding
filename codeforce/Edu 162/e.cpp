#include <iostream>
// #include "bits/stdc++.h"
#include <vector>

#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            emp                emplace_back
#define          sz(a)               (int)a.size()
#define rep(a,b) for (int i = a; i < b; i++)
#define ll long long int

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

class node{
    public:
    int val; 
    std::vector<node*> adj;
}; 
node* newNode(int val) { 
    node* Node = new node();
    Node->val = val; 

    return Node; 
} 
 
const int MOD = 1e+7;

using namespace std;
std::vector<node*>v;

int cnt=0;
void dfs(node* root, vector<int> vis){
    if(!root) return ;
    cout<<root->val<<" ";
    vis[root->val]++;
    if(vis[root->val] > 1){
        cnt++;
        // cout<<root->val<<" "<<vis[root->val]<<"  ";
    }
    for(auto i: root->adj){
        // cout<<i->val<<" ";
        dfs(i, vis);
    }
}
void solve(){
    int n; cin>>n;
    int arr[n] = {0};
    cnt =0;
    v.clear();
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.emp(newNode(x));
    }
    for(int i=0; i<n-1; i++){
        int x,y; cin>>x>>y;
        arr[y-1]++;
        v[x-1]->adj.emp(v[y-1]);
    }
    node* root = nullptr;
    for(int i=0; i<n; i++) if(arr[i] == 0){
        root = v[i];
        break;
    }
    vector<int> vis(n+1, 0);
    if(root) dfs(root, vis);
    cout<<cnt<<"\n";
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
