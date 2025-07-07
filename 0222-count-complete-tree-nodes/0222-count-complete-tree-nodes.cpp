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
void count(vector<int> &ans , TreeNode* root){
    if(root==nullptr){
        return ;
    }
    count(ans,root->left);
        ans.push_back(root->val);
        count(ans,root->right);
    

}
    int countNodes(TreeNode* root) {
     vector<int> ans;
     count(ans,root);
     return ans.size();   
    }
};