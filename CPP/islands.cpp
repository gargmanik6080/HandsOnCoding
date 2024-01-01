#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int c=0;
int n1,m1;
int dfs(vector< vector<int>> v, int i, int j, vector< vector<int>>& vis){
    if(i<0 || j<0 || i>=n1 || j>=m1){
        return 1;
    }
    if(vis[i][j] == 1) return 1;
    if(v[i][j] == 0) return 1;
    vis[i][j] = 1;
    int a = dfs(v, i+1, j, vis);
    int b = dfs(v, i, j+1, vis);
    int c1 = dfs(v, i-1, j, vis);
    int d = dfs(v, i, j-1, vis);
    int z = a && b && c1 && d;
    return z;
}
int main() {
    int n, m;
    cin>>n>>m;
    n1=n,m1=m;
    
    vector< vector<int>> v(n, vector<int>(m,0));
    vector< vector<int>> vis(n, vector<int>(m,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin>>x;
            v[i][j] = x;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j] == 1 && !vis[i][j]) {
                if(dfs(v, i, j, vis) == 1) c++;
            }
        }
    }
    cout<<c;
    return 0;
}
