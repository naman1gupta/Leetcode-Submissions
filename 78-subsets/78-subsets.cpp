typedef long long ll;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vv;
        vector<int>v;
        ll n=nums.size();
        for(ll i=0;i<pow(2,n);i++){
            for(ll j=0;j<n;j++){
                if(i & (1<<j)){
                    v.push_back(nums[j]);
                }
                
            }
            vv.push_back(v);
            v.clear();
        }
        return vv;
    }
};