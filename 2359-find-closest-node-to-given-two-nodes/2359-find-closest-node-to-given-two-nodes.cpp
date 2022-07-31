class Solution {
    
    
    void dijkstra(vector<vector<pair<int,int>>>&g,vector<int>&dist1,int n, int node1,int MAXD){
        for(int i = 0; i <= n; ++i){
            dist1[i] = MAXD;
        }
        priority_queue<pair<int,int>, 
        vector<pair<int,int>>, 
        greater<pair<int,int>> > pq;
        dist1[node1] = 0;
        pq.push({0,node1});
        while(!pq.empty()){
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            if(dist1[u] < d) {
                continue;
            }
            for(auto e: g[u]){
                int v = e.first;
                int c = e.second;
                if(dist1[v] <= c+d){
                    continue;
                }
                else{
                    dist1[v] = c+d;
                    pq.push({dist1[v], v});
                }
            }
        }
    }
    void dijkstra2(vector<vector<pair<int,int>>>&g,vector<int>&dist2,int n, int node2,int MAXD){
        for(int i = 0; i <= n; ++i){
            dist2[i] = MAXD;
        }
        priority_queue<pair<int,int>, 
        vector<pair<int,int>>, 
        greater<pair<int,int>> > pq;
        dist2[node2] = 0;
        pq.push({0,node2});
        while(!pq.empty()){
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            if(dist2[u] < d) {
                continue;
            }
            for(auto e: g[u]){
                int v = e.first;
                int c = e.second;
                if(dist2[v] <= c+d){
                    continue;
                }
                else{
                    dist2[v] = c+d;
                    pq.push({dist2[v], v});
                }
            }
        }
    }
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<vector<pair<int,int>>> g;
        int n =edges.size();
        vector<int> dist1,dist2;
        g.resize(n+1);
        const int MAXD = (1LL<<30 -1);
	    dist1.resize(n+1);
        dist2.resize(n+1);
        for(int i=0;i<edges.size();i++){
            if(edges[i] != -1){
                g[i].push_back({edges[i],1});
            }
        }
        dijkstra(g,dist1,n,node1,MAXD);
        dijkstra2(g,dist2,n,node2,MAXD);
        int mn=(1e6),indx=-1;
        for(int i=0;i<edges.size();i++){
            if(mn>max(dist1[i],dist2[i])){
                mn=min(mn,max(dist1[i],dist2[i]));
                indx =i;
            }
        }
        return indx;
    }
};