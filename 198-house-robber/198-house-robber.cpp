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

class Solution {
    ll mxsm(vector<ll>&v,ll i,vector<int>& nums){
       
        if(i > (nums.size()-1)){
            return 0;
        }
        else if(v[i] != -1){
            return v[i];
        }
        else{
            return v[i]=max(mxsm(v,i+1,nums),nums[i]+mxsm(v,i+2,nums));
        }
        return 0;
    }
public:
    int rob(vector<int>& nums) {
         ll n=nums.size();
        ll sum=0,i=-1;
        vector<ll>v(nums.size()+1,-1);
        return mxsm(v,0,nums);
    }
};