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
    ll numberOfTripsForGivenTime(vector<int>&a , ll givenTime)
    {
        ll totalTrips = 0;
        for(auto x : a)
        {
            ll val = x;
			
            totalTrips += (givenTime / val);
        }
        return totalTrips;
    }
public:
    long long minimumTime(vector<int>& arr ,  int totalTrips) {
        FAST;
        ll lowestTime = 1;
        ll highestTime = 1e14;
        while(lowestTime<highestTime)
        {
            ll mid = lowestTime + (highestTime-lowestTime)/2;
            
            if(numberOfTripsForGivenTime(arr , mid) >= totalTrips)
                highestTime = mid;
            else
                lowestTime = mid+1;
        }
        return lowestTime;
    }
};