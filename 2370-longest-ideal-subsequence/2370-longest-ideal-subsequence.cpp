class Solution {
public:
    int longestIdealString(string s, int k) {
        map<char, int> m;
        int n = s.size();
        for(int i=0; i<n; i++){
            char ch = s[i];
            int mx = 1;
            for(int j=-k; j<=k; j++){
                if(m.find(char(ch+j))!=m.end()){
                    // cout<<ch<<" "<<char(ch+j)<<endl;
                    mx = max(mx, m[ch+j]+1);
                }
            }
            m[ch] = mx;
        }
        int ans = 0;
        for(auto i:m){
            // cout<<i.first<<" "<<i.second<<endl;
            ans = max(ans, i.second);
        }
        return ans;
    }
};