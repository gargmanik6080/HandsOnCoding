
class DSU{
    public:
    vector<int> par, rank;
    DSU(int n){
        rank.assign(n, 0);
        for(int i=0; i<n; i++) par.emplace_back(i);
    }
    int find(int i){
        if(par[i] == i) return i;
        return par[i] = find(par[i]);
    }
    void union2(int i, int j){
        int x = find(i);
        int y = find(j);
        if(rank[x] > rank[y]) par[y] = x;
        else if(rank[y] > rank[x]) par[x] = y;
        else{
            par[y] = x;
            rank[x]++;
        }
    }
};