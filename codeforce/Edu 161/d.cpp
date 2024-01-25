#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include<iostream>
#include <bits/stdc++.h>
#define fst ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define arrin for(int i=0; i<n; i++) cin>>arr[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long
using namespace std;

class Node{
    public:
    int val;
    int d;
    Node* prev;
    Node* next;
    Node(int v){
        val = v;
        prev = NULL;
        next = NULL;
    }
};
Node* gh=NULL;
void del(Node* root){
    if(!root) return ;

    if(gh == root) gh = root->next;
    if(root->next) root->next->prev = root->prev;
    if(root->prev) root->prev->next = root->next;
}
void solve(){
    int n; cin>>n;
    int t; cin>>t;
    Node* head = new Node(t);
    gh=head;
    Node* cur=head;
    for(int i=1; i<n; i++){
        int x; cin>>x;
        Node* tmp = new Node(x);
        cur->next = tmp;
        tmp->prev = cur;
        cur = tmp;
    }
    cur = head;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        cur->d = x;
        cur = cur->next;
    }
    stack<Node*>s;
    int n2 = n, j;
    for(j=0; j<n; j++){
        cur = gh;
        for(int i=0; i<n2; i++){
            long dam = 0;
            if(cur->next != NULL) dam+=cur->next->val;
            if(cur->prev != NULL) dam+=cur->prev->val;
            if(cur->d < dam) s.push(cur);
            cur=cur->next;
        }
        cout<<s.size()<<" ";
        n2-=s.size();
        if(s.size() == 0) break;
        while(!s.empty()){
            Node* x = s.top();
            s.pop();
            del(x);
        }
    }
    for(j=j+1; j<n; j++) cout<<0<<" ";
    cout<<endl;
}

int main(){
    fst;
    cin.tie(NULL);
    int t = 1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
