class Solution {
public:
    int dist[101][101] = {0};
    
    int minDistance(vector<int>& houses, int K) {
        int n = houses.size();
        sort(begin(houses), end(houses));
        
        // Make housese 1-bases. 
        // The 0 ~ n-1 index will become 1 ~ n.
        houses.insert(houses.begin(), -1);
        
        for(int i=1; i<=n; i++) {
            for(int j=i; j<=n; j++) {
                // dist[i][j]: the minimum distance of placing a mailbox in houses[i..j]
                int m = houses[ (i+j)/2 ];
                for(int k=i; k<=j; k++) {
                    dist[i][j] += abs( m - houses[k] );
                }
            }
        }
        
        // dp state:
        //
        // dp[i][k]: minimum distance when allocating k mailboxes in i houses
        //
        // relation:
        //
        // dp[i][k] = dp[j][k-1] + dist[j+1][i]
        //
        //  1.........j......i
        /// |  k-1    |   k  | 
        vector<vector<int>> dp(n+1, vector<int>(K+1, n*n));
     
		// base cases:
        // 0 mailbox: dp[i][0] will be 0 (no mailbox is needed)
        // 1 mailbox: dp[i][1] will be equal to dist[1][i], meaning placing an mailbox between house 1..i
        for(int i=1; i<=n; i++) {
            dp[i][0] = 0;
            dp[i][1] = dist[1][i];
        }
        
        for(int i=1; i<=n; i++) {
			// Why we need k to start from 2?
			// 1.........i.......n
			// |  X      |   1   | 
			// If k is 1, we will have dp[j][0], which is invalid because we cannot skip the houses 1..i to set up 1 mailbox.
            for(int k=2; k<=K; k++) {
                for(int j=1; j+1<=i; j++) {
                    dp[i][k] = min(dp[i][k], dp[j][k-1] + dist[j+1][i]);
                }
            }
        }
        
        return dp[n][K];
    }
};