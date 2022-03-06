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

class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        FAST;
        ll res = 0, cur = 1;
        nums.push_back(INT_MAX);
        sort(begin(nums), end(nums));
        for (ll i = 0; k > 0 && i < nums.size(); ++i) {
            ll take = max(0, min(k, nums[i] - (int)cur));
            res += (cur + take) * (cur + take - 1) / 2 - cur * (cur - 1) / 2;
            k -= take;
            cur = (ll)nums[i] + 1;
        }
        return res;
    }
};