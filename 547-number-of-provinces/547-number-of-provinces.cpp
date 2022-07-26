class Solution {
    vector<int>adj[100001];
    vector<int> visited;
private:
    void dfs(int v) {
        visited[v] = 1;
        for (int u : adj[v]) {
            if (!visited[u])
                dfs(u);
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]){
                    adj[i+1].push_back(j+1);
                    adj[j+1].push_back(i+1);
                }
            }
        }
        int cc=0;
        for(int i=0;i<300;i++){
            visited.push_back(0);
        }
        for(int u=1;u<=n;u++){
            if(!visited[u]){
                dfs(u);
                cc++;
            }
        }
        // cout<< cc;
        return cc;
    }
};