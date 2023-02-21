class Solution {
public:
    int squareFreeSubsets(vector<int>& nums) {
        const int mod = 1'000'000'007; 
        vector<int> mask(31, -1), primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}; 
        for (int x = 1; x <= 30; ++x) {
            int m = 0, v = 1; 
            for (int i = 0; i < 10; ++i) 
                if (x % primes[i] == 0) v *= primes[i], m ^= 1<<i; 
            if (v == x) mask[x] = m; 
        }
        int n = nums.size(); 
        vector<vector<long>> dp(n+1, vector<long>(1<<10)); 
        for (int j = 0; j < 1<<10; ++j) dp[n][j] = 1; 
        for (int i = n-1; i >= 0; --i) {
            int m = mask[nums[i]]; 
            for (int j = 0; j < 1<<10; ++j) {
                dp[i][j] = dp[i+1][j]; 
                if (m >= 0 && (j & m) == 0) dp[i][j] = (dp[i][j] + dp[i+1][j ^ m]) % mod; 
            }
        }
        return ((dp[0][0] - 1) +mod)% mod; 
    }
};