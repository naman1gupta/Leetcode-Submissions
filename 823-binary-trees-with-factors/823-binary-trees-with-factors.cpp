class Solution
{
public:
    int mod = 1e9 + 7;
    int numFactoredBinaryTrees(vector<int> &arr)
    {
        int n = arr.size(), ans = 0;
        sort(arr.begin(), arr.end());
        unordered_map<int, long> dp;
        for (int i = 0; i < n; i++)
        {
            int r = arr[i]; // root
            dp[r] = 1;      // a root is a valid binary tree
            for (int j = 0; j < i; j++)
            {
                if (arr[i] % arr[j] == 0)
                {
                    int c1 = arr[j];     // child1
                    int c2 = r / arr[j]; // child2
                    dp[r] = (dp[r] + (dp[c1] * dp[c2]) % mod) % mod;
                }
            }
            ans = (ans + dp[r]) % mod;
        }
        return ans % mod;
    }
};