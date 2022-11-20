class Solution {
public:
    void inorder(TreeNode *root, vector<int> &nums){
        if(!root) return;
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
    int findMin(vector<int> &nums, int q){
        int l=0, h=nums.size()-1;
        int ans = -1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(nums[m]<=q){
                if(nums[m]==q){
                    return q;
                }
                ans = nums[m];
                l = m+1;
            }else{
                h=m-1;
            }
        }
        return ans;
    }
    int findMax(vector<int> &nums, int q){
        int l=0, h=nums.size()-1;
        int ans = -1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(nums[m]>=q){
                if(nums[m]==q){
                    return q;
                }
                ans = nums[m];
                h = m-1;
            }else{
                l=m+1;
            }
        }
        return ans;
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& q) {
        vector<int> nums;
        inorder(root, nums);
        vector<vector<int>>ans;
        for(int i=0; i<q.size(); i++){
            int mini = findMin(nums, q[i]);
            int maxi = findMax(nums, q[i]);
            ans.push_back({mini, maxi});
        }
        return ans;
    }
};