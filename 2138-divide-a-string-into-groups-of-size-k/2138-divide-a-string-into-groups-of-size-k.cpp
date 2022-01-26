
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
    vector<string> divideString(string s, int k, char fill) {
        ll n=s.size()/k;
        ll cnt=0;
        vector<string>v(n+1);
        vector<string>vv;
        if(s.size()%k==0){
            for(ll i=0;i<n;i++){
                for(ll j=i*k;j<(i+1)*k;j++){
                   v[i].push_back(s[j]);
                }
            }
            for(ll i=0;i<n;i++){
                vv.push_back(v[i]);
            }
            return vv;
        }
        else{
            ll i,j;
            for( i=0;i<n;i++){
                for( j=i*k;j<(i+1)*k;j++){
                    v[i].push_back(s[j]);
                }
            }
            for( j=i*k;j<s.size();j++){
                v[n].push_back(s[j]);
                cnt++;
            }
            while(cnt<k){
                v[n].push_back(fill);
                // j++;
                cnt++;
            }
            for(ll i=0;i<n+1;i++){
                vv.push_back(v[i]);
            }
            return vv;
        }
        
    }
};