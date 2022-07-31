class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if((mp[nums[i]] == 1) and (nums[i]>0)){
                cnt++;
            }
        }
        return cnt;
    }
};