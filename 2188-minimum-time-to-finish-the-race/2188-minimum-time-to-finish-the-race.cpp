class Solution {
public:
    int minimumFinishTime(vector<vector<int>>& tires, int changeTime, int numLaps) {
        int n = tires.size();
        vector<vector<int>> without_change(n, vector<int>(20, 2e9));
        for (int i = 0; i < n; i++) {
            without_change[i][1] = tires[i][0];
            for (int j = 2; j < 20; j++) {
                if ((long long)without_change[i][j-1] * tires[i][1] >= 2e9)
                    break;
                without_change[i][j] = without_change[i][j-1] * tires[i][1];
            }
            for (int j = 2; j < 20; j++) {
                if ((long long)without_change[i][j-1] + without_change[i][j] >= 2e9)
                    break;
                without_change[i][j] += without_change[i][j-1];
            }
        }
        vector<int> dp(numLaps+1, 2e9);
        for (int i = 0; i < n; i++) {
            dp[1] = min(dp[1], tires[i][0]);
        }
        for (int x = 1; x <= numLaps; x++) {
            if (x < 20) {
                for (int i = 0; i < n; i++) {
                    dp[x] = min(dp[x], without_change[i][x]);
                }
            }
            for (int j = x-1; j > 0 && j >= x-18; j--) {
                dp[x] = min(dp[x], dp[j] + changeTime + dp[x-j]);
            }
        }
        
        return dp[numLaps];
    }
};