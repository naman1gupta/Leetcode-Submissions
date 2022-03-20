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
    int countHillValley(vector<int>& nums) {
        FAST;
        int n=nums.size(),cnt=0;
        for(int i=1;i<(n-1);i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            ll prv=-1,nxt=-1;
            for(ll j=i-1;j>=0;j--){
                if(nums[i]!=nums[j]){
                    prv=nums[j];
                    break;
                }
            }
            for(ll j=i+1;j<n;j++){
                if(nums[i]!=nums[j]){
                    nxt=nums[j];
                    break;
                }
            }
            if(prv==-1 or nxt==-1){
                continue;
            }
            else{
                if((prv<nums[i] and nxt<nums[i]) or (prv>nums[i] and nxt>nums[i])){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};