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
public:
    TreeNode* invertTree(TreeNode* root) {

    if(root==nullptr)
        return nullptr;
    
    TreeNode* temp1 = root->left;
    TreeNode* temp2 = root->right;
    root->left=temp2;
    root->right=temp1;
    
    TreeNode* left_tree = invertTree(root->left);
    TreeNode* right_tree = invertTree(root->right);
    
    root->left=left_tree;
    root->right=right_tree;
    
    return root;
        
}

};