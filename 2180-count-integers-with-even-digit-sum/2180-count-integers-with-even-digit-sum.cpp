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
    int countEven(int num) {
        FAST;
        ll numm=num;
        ll n=num/100;
        ll sum=0;
        // sum+=((n*100)/2);
        // if(n%2!=0){
        //     sum--;
        // }
        // num=num-(100*n);
        // ll nn=num/20;
        // sum+=((nn*20)/2);
        // num-=(nn*20);
        // ll indx=0,flag=0;
        // for(ll i=numm;i>=0;i--){
        //     if(numm%10==0 and numm%20!=0 and flag==0){
        //         flag=1;
        //         continue;
        //     }
        //     if(i%10==0){
        //         indx=i;
        //         break;
        //     }
        // }
        ll kk=0,sum1=0;
        ll a[50]={0};
        ll indx=0;
        for(ll i=indx+1;i<=numm;i++){
            kk=0,sum1=0;
            ll ii=i;
            while(ii>0){
                a[kk]=ii%10;
                ii/=10;
                sum1+=a[kk];
                kk++;
            }
            if(sum1%2==0 and sum1>0){
                sum++;
            }
        }
        
        return sum;
        
    }
};