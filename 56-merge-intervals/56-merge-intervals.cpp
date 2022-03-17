class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v= intervals,v1;
         sort(v.begin(),v.end());
        int n=v.size();
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1][0] <= v[i][1]){
                v[i+1][0]=v[i][0];
                v[i+1][1]=max(v[i][1],v[i+1][1]);
                v[i][0]=-1;
                v[i][1]=-1;
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i][0]!=-1){
                v1.push_back(v[i]);
            }
        }
        return v1;
    }
};