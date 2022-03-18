    bool cmp( vector<int> &a,vector<int> &b) {
        return (a[1] < b[1]);
    }
class Solution {
    
public:
    int findMinArrowShots(vector<vector<int>>& v) {
        int n=v.size();
        int cnt=0;
        sort(v.begin(),v.end(), cmp);
        for(int i=0;i<n;i++){
            cnt++;
            for(int j=i+1;j<n;j++){
                if(v[j][0] <= v[i][1]){
                    
                }
                else{
                    i=j-1;
                    break;
                }
                if(j== n-1){
                    i=j;
                }
            }
        }
        return cnt;
    }
};