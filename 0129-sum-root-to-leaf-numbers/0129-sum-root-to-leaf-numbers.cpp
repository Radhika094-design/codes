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
    void preorder(int& ans, int currsum , TreeNode* root)
    {
        
        if(root == nullptr){
            return;
        }
        currsum = currsum * 10 + root->val;
        if(root->left == nullptr &&root->right==nullptr){
            ans = ans + currsum;
            return;
        }
      
        preorder(ans,currsum , root->left);
        preorder(ans,currsum,root->right);
    }
    int sumNumbers(TreeNode* root) {
      int ans=0;
      preorder(ans,0 ,root);
      return ans ;  
    }
};