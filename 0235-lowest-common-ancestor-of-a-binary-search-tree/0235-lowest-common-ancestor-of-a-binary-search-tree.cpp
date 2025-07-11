/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case: if root is null, return null
        if (root == nullptr) return nullptr;
while(root!=nullptr){
        // If both p and q are less than root, LCA is in the left subtree
        if (p->val < root->val && q->val < root->val) {
        root = root->left;
        }

        // If both p and q are greater than root, LCA is in the right subtree
       else if (p->val > root->val && q->val > root->val) {
           root= root->right;
        } else{
            return root;
        }
}

        // If p and q are on different sides (or one is root), current root is LCA
        return nullptr;
    }
    
};
