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
void Inorder(vector<int> &ans,TreeNode* root){
        if(root==nullptr){
            return;
        }
        Inorder(ans,root->left);
        ans.push_back(root->val);
        Inorder(ans,root->right);
       
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        Inorder(ans , root);
        return ans;
    }
    
};