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
// const ll nn=1e5 + 1;

class Solution {
public:
    double myPow(long double x, ll n) {
        FAST;
        long double ans=1;
        // long double ansa=1,ansb=1,ansc=1,ansd=1,anse=1,ansf=1;
        // ll nn1=abs(n);
        // ll indx1=0,indx2=0;
        // for(ll i=1;i<=10;i++){
        //     ansa*=x;
        // }
        // for(ll i=1;i<=10;i++){
        //     ansb*=ansa;
        // }
        // for(ll i=1;i<=10;i++){
        //     ansc*=ansb;
        // }
        // for(ll i=1;i<=10;i++){
        //     ansd*=ansc;
        // }
        // for(ll i=1;i<=10;i++){
        //     anse*=ansd;
        // }
        // for(ll i=1;i<=10;i++){
        //     ansf*=anse;
        // }

        while (n) {
            if (n % 2){
                if(n > 0){
                    ans*=x ;
                }
                else{
                    ans=(1.0*ans)/(1.0*x);
                }
            }
            x = x * x;
            n /= 2;
        }
        // return ans;
        
        
        
        
        // long double nnn=x-(nn*1.0);
        // for(ll i=1;i<=sqrt(nn1);i++){
        //     if(nn1%i==0){
        //         indx1=i;
        //         indx2=nn1/i;
        //     }
        // }
        // // cout<<indx1<<" "<<indx2<<' ';
        // for(ll i=1;i<=indx1;i++){
        //     ans*=x;
        //     // cout<<"hue"<<' ';
        // }
        // long double anss=ans;
        // ans=1;
        // for(ll i=1;i<=indx2;i++){
        //     ans*=anss;
        //     // cout<<"hue"<<' ';
        // }    
        if(n<0){
            ans=(1.0)/(ans*1.0);
        }

        return ans;
    }
};