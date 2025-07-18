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
    void leafnode(vector<int> &ans , TreeNode* root){
        if(root==nullptr){
            return;
        }
        if(root->left==nullptr&&root->right==nullptr){ //if its leaf node
            ans.push_back(root->val);
        }
        leafnode(ans,root->left);
        leafnode(ans,root->right);
    }
   
    
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
         vector<int> leaves1, leaves2;

        leafnode(leaves1, root1);
        leafnode(leaves2, root2);

        return leaves1 == leaves2;
    }
};