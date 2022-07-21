/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
    int mx=0;
        if(root==NULL){
            return 0;
        }
        for(int i=0;i<root->children.size();i++){
            mx=max(maxDepth(root->children[i]),mx);
        }
        // int mxx=mx;
        // mx=0;
        return 1+mx;
        // return (1+ max(maxDepth(root->left)),maxDepth(root->right));
    }
};