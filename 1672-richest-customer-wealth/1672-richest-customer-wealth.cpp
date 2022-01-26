class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int cnt[n];
        for(int i=0;i<n;i++){
            cnt[i]=0;
        }
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                cnt[i]+=accounts[i][j];
            }
        } 
        sort(cnt,cnt+n,greater<int>());
        return cnt[0];
    }
};