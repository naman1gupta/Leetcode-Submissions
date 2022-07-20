/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int summ(TreeNode* root, int low, int high, int &sum){
        if(root != NULL){
        if((root->val <= high) and (root->val >= low)){
            sum+=(root->val);
        }
        summ(root->left,low,high,sum);
        summ(root->right,low,high,sum);
        }
        return sum;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        summ(root,low,high,sum);
        return sum;
    }
};