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
    void hue(long long int n,long long int &x){
        FAST;
        if(n==1) {
            x=0;
            return ;
        }
        if(n%2!=0 or n==0){
            x=1;
            return ;
        }
        hue(n/2,x);
    }
public:
    bool isPowerOfTwo(long long int n) {
        long long int x=0;
        hue(n,x);
        // cout<<x<<endl;
        if(x==0){
            return true;
        }
        else{
            return false;
        }
    }
};