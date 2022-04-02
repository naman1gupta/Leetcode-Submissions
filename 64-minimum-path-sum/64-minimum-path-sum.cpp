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
const ll inf = (1LL<<63 -1) + (1LL<<62 -1);

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        ll m=grid.size();
        ll n=grid[0].size();
        ll a[m+10][n+10],nums[m+10][n+10];
        for(ll i=1;i<=m;i++){
            for(ll j=1;j<=n;j++){
               nums[i][j]=grid[i-1][j-1];
            }
        }
        for(ll i=0;i<=m;i++){
            for(ll j=0;j<=n;j++){
                a[i][j]=inf;
            }
        }
        a[1][1]=nums[1][1];
        for(ll i=1;i<=m;i++){
            for(ll j=1;j<=n;j++){
                if(i==1 and j==1){
                    continue;
                }
                a[i][j]=min(a[i-1][j],a[i][j-1]) + nums[i][j];
                // cout<<a[i][j]<<' ';
            }
        }
        return a[m][n];
    }
};