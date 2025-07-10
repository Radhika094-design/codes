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
        if(root==nullptr)return root;
        if(root == p || root == q)return root; // if one of them is same with root 
       TreeNode* left =  lowestCommonAncestor(root->left, p , q);
        TreeNode*right =  lowestCommonAncestor(root->right,p,q);
        if(left && right)return root;
        if(left!= nullptr)return left ;
        else{ return right;}
    }
};