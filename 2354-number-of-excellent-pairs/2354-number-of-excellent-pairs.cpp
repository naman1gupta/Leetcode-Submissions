class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        // For any number in nums, we need another number having
        // atleast (k - __builtin_popcount(num)) set bits in it.
        
        int n = nums.size();
        unordered_set<int> cnt[31];
        
        for(int num : nums) {
            int bits = __builtin_popcount(num);
            cnt[bits].insert(num);
        }
        
        long long ans = 0;
        unordered_set<int> vis;
        for(int num : nums) {
            if(vis.count(num)) continue;
            
            int need = max(0, k - __builtin_popcount(num));
            for(int bits = need; bits < 31; bits++) {
                ans = ans + (long long)cnt[bits].size();
            }
            
            vis.insert(num);
        }
        
        return ans;
    }
};