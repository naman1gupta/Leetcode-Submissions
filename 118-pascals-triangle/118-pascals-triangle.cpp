
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
    vector<vector<int>> generate(ll numRows) {
        FAST;
        ll n=numRows;
        vector<vector<int>> a(n);            
        for(ll i = 0; i < n; i++) {
            a[i] = vector<int>(i+1,1);        
            for(ll j = 1; j < i; j++)  {       
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];      
            }
        }
        return a;
    }
};