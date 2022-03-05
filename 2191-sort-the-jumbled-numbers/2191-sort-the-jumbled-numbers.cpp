class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        map<int,vector<int>> mp;
        for(int i=0; i<n; i++){
            string curr = to_string(nums[i]);
            int newVal = 0;
            for(int j=0; j<curr.length(); j++){
                int currDig = curr[j] - '0';
                int newDig = mapping[currDig];
                newVal = newVal * 10 + newDig;
            }
            mp[newVal].push_back(nums[i]);
        }
        vector<int> ans;
        for(auto it : mp){
            for(int v : it.second) ans.push_back(v);
        }
        return ans;
    }
};