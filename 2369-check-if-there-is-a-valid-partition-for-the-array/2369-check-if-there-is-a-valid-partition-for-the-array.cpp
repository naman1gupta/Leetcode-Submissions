class Solution {
public:
    // recursive
//     bool partition(vector<int> nums, int n){
//         if(n<=1){
//             return 0;
//         }
//         if(n==2) return nums[0]==nums[1];
//         if(n==3){
//             if(nums[0]==nums[1] && nums[1]==nums[2]){
//                 return true;
//             }
//             if(nums[2] == nums[1]+1 && nums[1] == nums[0] + 1){
//                 return true;
//             }
//             return false;
//         }
//         bool a=false,b=false,c=false;
//         if(nums[n-1]==nums[n-2]) a = partition(nums, n-2);
//         if(nums[n-1]==nums[n-2] && nums[n-2] == nums[n-3]) b = partition(nums, n-3);
//         if(nums[n-1]-1==nums[n-2] && nums[n-2]-1 == nums[n-3]) c = partition(nums, n-3);
//         return a||b||c;
//     }
//     bool validPartition(vector<int>& nums) {
//         int n = nums.size();
//         return partition(nums, n);
        
//     }
    
// iterative dp -

bool validPartition(vector<int>& nums) {
        int n = nums.size();
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = (nums[0]==nums[1]);
        if(n>=3){
            if(nums[0]==nums[1] && nums[1]==nums[2]){
                dp[3] = true;
            }
            else if(nums[2] == nums[1]+1 && nums[1] == nums[0] + 1){
                dp[3] = true;
            }else{
                dp[3] = false;
            }
            
        }
        
        if(n>=4){
            for(int i = 4;i<=n;i++){
                bool a=false,b=false,c=false;
                if(nums[i-1]==nums[i-2]) a = dp[i-2];
                if(nums[i-1]==nums[i-2] && nums[i-2] == nums[i-3]) b = dp[i-3];
                if(nums[i-1]-1==nums[i-2] && nums[i-2]-1 == nums[i-3]) c = dp[i-3];

                dp[i] = a||b||c;
            }
        }
        return dp[n];
    }
};