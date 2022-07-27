class Solution {
public:
    void rec(vector<vector<int>>& graph,vector<vector<int>>&vv,vector<int>&v,int n){
        if(v[v.size()-1] == n-1){
            vv.push_back(v);
            // cout<<"hue";
            // v.clear();
            // return;
        }
        else{
            int i=v[v.size()-1];
            // cout<<"gop";
            for(int j=0;j<graph[i].size();j++){
                v.push_back(graph[i][j]);
                rec(graph,vv,v,n);
                // cout<<"gop";
                v.pop_back();
            }
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>vv;
        vector<int>v;
        v.push_back(0);
        rec(graph,vv,v,n);
        return vv;
    }
};