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

void Postorder(vector<int> &ans,TreeNode* root){
        if(root==nullptr){
            return;
        }
        Postorder(ans,root->left);
       
        Postorder(ans,root->right);
         ans.push_back(root->val);
       
    }
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int>ans;
        Postorder(ans , root);
        return ans;
    }
};