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
    ll minimumRemoval(vector<int>& beans) {
        FAST;
        ll n = beans.size();
        if(n == 1)
            return 0;
        vector<ll> pre(n, 0);
        sort(all(beans));
        pre[0] = 1LL*beans[0];
        for(ll i=1; i<n; i++){
            pre[i] += pre[i-1]+beans[i];
        }
        ll ans = pre[n-1] - beans[0] - ((n-1)*beans[0]);
        for(ll i=1; i<n; i++){ 
            ll tmp = (ll)(pre[i-1] + (pre[n-1] - pre[i] - (beans[i]*(n-i-1)))); 
            ans = min(ans,tmp);
        }
        
        return ans;
    }
};