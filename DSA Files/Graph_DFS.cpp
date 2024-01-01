// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

class graph {
    int n;
    vector<list<int>> adj;
    public:
    graph(int n){
        this->n=n;
        adj.resize(n);
    }

    void addEdge(int n,int a);
    void dfs(int n);
    void bfs(int n);
};

void graph::addEdge(int n,int a){
    adj[n].push_back(a);
}

void graph::dfs(int n){
    queue<int> q;
    vector<bool> visited;
    visited.resize(n,false);

    q.push(n);
    cout<<n<<" ";
    while(!q.empty()){
        visited[q.front()]=true;
        for(auto i: adj[q.front()]){
            if(!visited[i]){
                cout<<i<<" ";
                visited[i]=true;
                q.push(i);
            }
        }
        q.pop();
    }
}

void graph::bfs(int n){
    queue<int> q;
    vector<bool> visited;
    visited.resize(n,false);

    visited[n] = true;
    q.push(n);
    while(!q.empty()){
        cout<<q.front()<<" ";
        for(auto i: adj[q.front()]){
            if(!visited[i]){
                // cout<<i<<" ";
                visited[i]=true;
                q.push(i);
            }
        }
        q.pop();
    }
}
int main(){
    cout<<endl;
    graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(1,1);
    g.addEdge(2,3);
    g.addEdge(2,0);
    g.addEdge(3,3);

    g.bfs(2);

}