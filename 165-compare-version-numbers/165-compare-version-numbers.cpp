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
    int compareVersion(string version1, string version2) {
        FAST;
        ll size1 = version1.size();
        ll size2 = version2.size();
        ll i=0, j=0;
        while(i<size1 || j<size2){
           ll num1 = 0;
           ll num2 = 0;
           while(i<size1 and version1[i]!='.'){
                num1 = num1*10 + version1[i]-'0';
                i++;
            }
            while(j<size2 and version2[j]!='.'){
                num2 = num2*10 + version2[j]-'0';
                j++;
            }
            
            if(num1 > num2){        
                return 1;
            }
            else if(num1< num2){
                return -1;
            }
            i++;
            j++;   
        }
       return 0; 
    }
};