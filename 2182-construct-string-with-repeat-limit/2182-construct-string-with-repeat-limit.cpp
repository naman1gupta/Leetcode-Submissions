#include<bits/stdc++.h>
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
    // ll min(ll a,ll b){
    //     if(a<=b){
    //         return a;
    //     }
    //     else{
    //         return b;
    //     }
    // }
public:
    string repeatLimitedString(string s, int repeatLimit) {
        ll n=s.size();
        ll a[27]={0};
        ll nn=0,flag=0;
        string str;
        ll i,prevIdx = -1,prevCount = 0;
        for(ll i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        while(true){
            i = 25;
            while(i>=0 && (a[i]==0 || (prevCount==repeatLimit && prevIdx==i))){
                i--;
            }
            if(i >= 0){
                str.push_back('a'+i);
                a[i]--;
                prevCount = prevIdx==i ? prevCount+1 : 1;
                prevIdx = i;
            }
            else{
                break;
            }
        
        }
        return str;
    }
};