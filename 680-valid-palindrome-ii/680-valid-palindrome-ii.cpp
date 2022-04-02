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
const ll inf = (1LL<<63 -1) + (1LL<<62 -1);

class Solution {
public:
    bool validPalindrome(string s) {
        FAST;
        int i=0;
        int n=s.length();
        int j=n-1;
        int count=0,count1=0;
            while(i<=j){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else{
                    i++;
                    count++;
                }
            }
         i=0;
         j=n-1;
            while(i<=j){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else{
                    j--;
                    count1++;
                }
            } 
        if(count==0 || count1==0){
            return true;
        }
        if(count==1 || count1==1){
            return true;
        }
        return false;
    }
};