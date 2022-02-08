using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
#define PI 3.1415926535
#define SORT(v)  sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())

typedef long long int ll;

const ll N = 3e5 + 10;
const ll mod = 1e9 + 7;
const ll MAXX = 1e6 + 5;
const ll nn=1e5 + 1;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>>vv;
        FAST;
        ll n=nums.size();
        for(ll i=0;i<(1<<n);i++){
            for(ll j=0;j<n;j++){
                if((i & (1<<j)) !=0){
                    v.push_back(nums[j]);
                }
            }
            vv.push_back(v);
            v.clear();
        }
        return vv;
    }
};