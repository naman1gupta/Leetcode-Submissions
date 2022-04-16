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
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        FAST;
        ll num1=total/cost1;
        ll num2=total/cost2;
        ll sum=0,num3,num4;
        for(ll i=0;i<=num1;i++){
            num3=total-(i*cost1);
            num4=num3/cost2;
            sum+=(num4 +1);
        }
        return sum;
    }
};