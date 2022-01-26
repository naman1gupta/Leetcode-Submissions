typedef long long int ll;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v(2*n);
        for(ll i=0;i<n;i++){
            v[2*i]=nums[i];
            v[i+i+1]=nums[i+n];
        }
        return v;
    }
};