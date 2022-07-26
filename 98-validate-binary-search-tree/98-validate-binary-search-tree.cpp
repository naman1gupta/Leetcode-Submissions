const long long inf = 1e18;

class Solution {
    public:
    bool isValidBST(TreeNode* root) {
        return checkNode(root, -inf, inf);
    }
    
    private:
    bool checkNode(TreeNode* node, long min, long max) {
        if (node == NULL){
            return true;
        }
        if(node->val > min && node->val < max){
            return (checkNode(node->left, min, node->val) && checkNode(node->right, node->val, max));
        } else {
            return false;
        }
    }
};