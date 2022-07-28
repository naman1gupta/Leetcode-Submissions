class Solution {
    vector<int> color;
    vector<bool> vis;
    vector<vector<int>>g;
    bool dfs(int u, int c, int par){
        vis[u] = true;
        color[u] = c;

        for(auto v: g[u]){
            if(v == par) continue;
            if(color[v] == 0)
                if(!dfs(v, (color[u]^3), u)) 
                    return false;
            if(color[v] == color[u]) 
                return false;
        }
        return true;
    }
 
    bool color_all(int n){
        for(int i = 0; i < n; ++i){
            if(!vis[i])
                if(!dfs(i,1,-1)) 
                    return false;
        }
        return true;
    }
    public:
    bool isBipartite(vector<vector<int>>& graph) {
        g= graph;
        int n=g.size();
        color.resize(n+1);
	    vis.resize(n+1);
        return color_all(n);
    }
};