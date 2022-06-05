typedef long long ll;
class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<ll,ll>m;
        ll n=nums.size();
        ll mm=operations.size();
        for(ll i=0;i<n;i++){
            m[nums[i]]=i;
        }
        for(ll i=0;i<mm;i++){
            ll a=operations[i][0];
            ll b=operations[i][1];
            nums[m[a]]=b;
            m[b]=m[a];
        }
        return nums;
    }
};