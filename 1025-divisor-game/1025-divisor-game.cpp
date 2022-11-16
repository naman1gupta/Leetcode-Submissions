class Solution {
public:
    bool divisorGame(int n) {
        bool dp[n+10];
        for(int i=0;i<=n;i++){
            dp[i]=false;
        }
        dp[1]=false;
        dp[2]=true;
        for(int i=2;i<=n;i++){
            for(int j=1;j<i;j++){
                if(((i/j)*j) == i){
                    if(dp[i-j]==false){
                        // cout<<i<<' '<<j;
                        dp[i]=true;
                        break;
                    }
                }
            }
            
            // dp[i]=false;
        }
        return dp[n];
    }
};