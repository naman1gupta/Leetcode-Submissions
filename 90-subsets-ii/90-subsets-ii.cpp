typedef long long ll;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> vv,vv1;
        vector<int>v;
        ll n=nums.size();
        for(ll i=0;i<pow(2,n);i++){
            for(ll j=0;j<n;j++){
                if(i & (1<<j)){
                    v.push_back(nums[j]);
                }
                
            }
            sort(v.begin(),v.end());
            vv.push_back(v);
            v.clear();
        }
        sort(vv.begin(),vv.end());
        for(ll i=0;i<vv.size()-1;i++){
            if(vv[i+1]!=vv[i]){
                vv1.push_back(vv[i]);
            }
        }
        vv1.push_back(vv[vv.size()-1]);
        return vv1;
    }
};