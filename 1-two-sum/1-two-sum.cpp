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
    vector<int> twoSum(vector<int>& nums, int target) {
        FAST;
        vector<int>v;
        sort(all(v));
        for(int i=0;i<nums.size();i++){
            for(ll j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }   
        return v;
    }
    
    
};