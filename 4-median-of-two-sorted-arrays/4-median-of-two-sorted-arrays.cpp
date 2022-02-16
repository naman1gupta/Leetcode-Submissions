using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
#define PI 3.1415926535
#define SORT(v)  sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())

typedef long long int ll;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        
        ll n=A.size();
        ll m=B.size();
        
        if(n>m) return findMedianSortedArrays(B,A);
        
        ll totalLeft = (n+m+1)/2;
        
        ll s=0, e=n;
        
        while(s<=e){
            ll mid = (s+e)/2;
            ll countA = mid;
            ll countB = totalLeft-countA;
            
            double leftA = (countA==0) ? INT_MIN : A[countA-1] ;
            double rightA = (countA==n) ? INT_MAX : A[countA] ;
            
            double leftB = (countB==0) ? INT_MIN : B[countB-1] ;
            double rightB = (countB==m) ? INT_MAX : B[countB] ;
            
            if(leftB > rightA) 
                s=mid+1;
            else if(leftA > rightB)
                e=mid-1;
            else{
                ll total = (n+m);
                if( total % 2 != 0 )
                    return double(max(leftA,leftB));
                else 
                    return (double(max(leftA,leftB)) + double(min(rightA,rightB)))/2;
            }
        }
        return 0;
    }
};