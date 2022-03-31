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
public:
    int lengthOfLongestSubstring(string s) {
        FAST;
        int store[256]={0};
        int l=0;    
        int r=0;    
        int ans=0;
        
        while(r<s.length())    
        {
            store[s[r]]++;      
            
            while(store[s[r]]>1)    
            { 
                store[s[l]]--;   
                l++;        
            }
            
            ans = max(ans,r-l+1); 
            r++;  
        }
        return ans;
    }
};