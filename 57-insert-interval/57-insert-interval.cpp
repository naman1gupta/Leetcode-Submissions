class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v= intervals,vnew;
        vector<int>v1=newInterval;
        int mn=v1[0],mx=v1[1];
        for(int i=0;i<v.size();i++){
            if(v[i][1] < v1[0]){
                vnew.push_back(v[i]);
            }
            else if(v[i][0] > v1[1]){
                vnew.push_back(v[i]);
            }
            else{
                if(v[i][0] <= mn){
                    mn=v[i][0];
                }
                 if(v[i][1] > mx){
                    mx=v[i][1];                    
                }
            }
        }
        v1[0]=mn,v1[1]=mx;
        vnew.push_back(v1);
        sort(vnew.begin(),vnew.end());
        return vnew;
    }
};