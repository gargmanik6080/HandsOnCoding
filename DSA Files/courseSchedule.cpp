#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indeg(numCourses,0);
        vector<bool> vis(numCourses,0);
        vector<vector<int>> graph(numCourses);
        int v=0;
        for(const vector<int>& x:prerequisites){
            v=x[0];
            ++indeg[v];
            graph[x[1]].push_back(v);
        }
        queue<int> q;
        v=0;
        for(int i=0;i<numCourses;++i) if(indeg[i]==0) q.push(i);
        while(!q.empty()){
            int t=q.front();
            q.pop();
            if(vis[t]) return false;
            vis[t]=true;
            for(const int& x:graph[t]) if(!(--indeg[x])) q.push(x);
            ++v;
        }
        return numCourses==v;

    }
};