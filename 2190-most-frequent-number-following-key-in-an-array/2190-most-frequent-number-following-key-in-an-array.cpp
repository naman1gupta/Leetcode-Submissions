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
    int mostFrequent(vector<int>& nums, int key) {
        FAST;
        ll a[1010]={0};
        ll n=nums.size();
        for(ll i=0;i<n-1;i++){
            if(nums[i]==key){
                a[nums[i+1]]++;
            }
        }
        ll mxid=0,mx=0;
        for(ll i=0;i<1010;i++){
            if(a[i]>mx){
                mxid=i;
                mx=a[i];
            }
        }
        return mxid;
    }
};