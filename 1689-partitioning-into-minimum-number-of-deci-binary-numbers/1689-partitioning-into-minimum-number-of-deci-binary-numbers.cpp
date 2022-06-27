typedef long long ll;

class Solution {
public:
    int minPartitions(string n) {
        ll mx=0;
        for(ll i=0;i<n.size();i++){
            ll num = n[i]-'0';
            mx=max(mx,num);
        }
        return mx;
    }
};