
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
    int superPow(int a, vector<int>& b) {
        ll n = b.size();
        ll ans = 1;
        ll aa = a % 1337;
        
        for (ll i = n-1; i >= 0; i--) {
            
            ll res = 1;
            for (ll j = 0; j < b[i]; j++) {
                res = (res * aa) % 1337;
            }
            
            ans = (ans * res) % 1337;
            for (ll j = b[i]; j < 10; j++) {
                res = (res * aa) % 1337;
            }
            
            aa = res;
        }
        
        return ans;
    }
};