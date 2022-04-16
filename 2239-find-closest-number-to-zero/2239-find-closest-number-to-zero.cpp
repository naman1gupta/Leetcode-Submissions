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
    int findClosestNumber(vector<int>& nums) {
        FAST;
        sort(nums.begin(),nums.end());
        ll n=nums.size();
        int num=0;
        vector<int>a=nums;
        if(a[0]>=0){
            num=a[0];
        }
        else if(a[n-1]<=0){
            num=a[n-1];
        }
        else{
            for(ll i=0;i<n;i++){
                if(a[i]<=0 and a[i+1]>=0){
                    if(abs(a[i]-0)>=abs(a[i+1]-0)){
                        num=a[i+1];
                    }
                    else{
                        num=a[i];
                    }
                    break;
                }
            }
        }
        return num;
        
    }
};