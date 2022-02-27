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
    int prefixCount(vector<string>& words, string pref) {
        FAST;
        ll flag=0;
        int cnt=0;
        for(ll i=0;i<words.size();i++){
            for(ll j=0;j< pref.size();j++){
                if(words[i][j]!=pref[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                if(pref.size()<= words[i].size()){
                    cnt++;
                }
            }
            flag=0;
            
        }
        return cnt;
    }
};