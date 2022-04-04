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
    bool isPossible(vector<int>& nums, ll k, ll mid){
        ll cnt=0;
        for(ll i=0;i<nums.size();i++){
            if(nums[i]>=mid){
                cnt+=(nums[i]/mid);
            }
        }
        return (cnt >= k);
    }
public:  
    int maximumCandies(vector<int>& candies, long long k) {
        FAST;
        ll n=candies.size();
        ll sum=0;
        int mx=INT_MIN;
        sort(candies.begin(),candies.end());
        for(ll i=0;i<n;i++){
            sum+=candies[i];
            mx=max(mx,candies[i]);
        }
        ll l=1,r=mx;
        ll res=0;
        while(l<=r){
            ll mid=l+(r-l)/2;
            if(isPossible(candies,k,mid)){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return r;
    }
};