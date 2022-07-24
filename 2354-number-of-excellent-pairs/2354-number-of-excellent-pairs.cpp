class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        long long ans=0 , size=0  ;
        unordered_map<int,int> m;
        vector<long long> v;
        for(auto it : nums)
        {
           if(m[it]==0)
           {
               long long t=__builtin_popcount(it);
               if(t<k)
               v.emplace_back(t);
               size++;
           }
            m[it]=1;
        }
        sort(v.begin(),v.end());
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            long long x= k-v[i];
            auto add =lower_bound(v.begin(), v.end(), x);
            long long y= (add-v.begin());
            ans+=(n-y);
        }
       // cout<<size<<" "<<n;
        ans+= ((size-n)*n*2);
        size=size-n;
        ans+= size*(size-1);
        ans+= size;
        
        return ans;
        
    }
};