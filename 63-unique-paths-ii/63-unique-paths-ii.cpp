using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
#define PI 3.1415926535
#define SORT(v)  sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define all(v) (v).begin(),(v).end()
#define forn(i,n) for(int i=0;i<(n);i++)
typedef long long int ll;

const ll N = 3e5 + 10;
const ll mod = 1e7 + 7;
const ll MAXX = 1e6 + 5;
const ll nn=1e5 + 1;
// const ll inf = (1LL<<63 -1) + (1LL<<62 -1);


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        FAST;
        ll m=obstacleGrid.size();
        ll n=obstacleGrid[0].size();
        ll dp[m+1][n+1];
        ll obstacle[m+1][n+1];
        for(ll i=0;i< m;i++){
            for(ll j=0;j< n;j++){
                obstacle[i+1][j+1]=obstacleGrid[i][j];
            }
        }
        if(obstacle[1][1] == 1 or obstacle[m][n] == 1){
            return 0;
        }
        for(ll i=0;i< m+1;i++){
            for(ll j=0;j< n+1;j++){
                if(i==0 or j==0 ){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=-1;
                }
            }
        }
        for(ll i=1;i< m+1;i++){
            for(ll j=1;j< n+1;j++){
                if(obstacle[i][j]==1){
                    dp[i][j]=0;
                }
            }
        }
        dp[1][1]=1;
        for(ll i=1;i< m+1;i++){
            for(ll j=1;j< n+1;j++){
                if(dp[i][j] != 0 and !(i==1 and j==1)){
                    dp[i][j]=dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        return dp[m][n];
        // return 2;
    }
};