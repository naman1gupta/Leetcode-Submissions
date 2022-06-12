class Solution {
    typedef long long ll;
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        const ll N=1e5;
        // ll a[N+10]={0};
        unordered_map<ll,ll>a(N);
        for(ll i=1;i<=N;i++){
            a[i]=0;
        }
        vector<int>v;
        for(ll i=0;i<potions.size();i++){
            a[potions[i]]++;
        }
        for(ll i=N;i>=0;i--){
            // if(a[i]==0){
                a[i]+=a[i+1];
            // }
        }
        long double cnt=0;
        for(ll i=0;i<spells.size();i++){
            cnt=((success*1.0)/(spells[i]*1.0));
            if(success%spells[i]!=0){
                cnt++;
            }
            ll num=cnt;
            // cout<<a[num];
            num=a[num];
            v.push_back(num);
            
        }
        return v;
    }
};