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
    void preorder(TreeNode* root , vector<string>& s, string res){
        if(root==nullptr){
            return;
        }
        if(!res.empty()){
            res+="->";

        }
        res = res+ to_string(root->val);
        if(root->left == nullptr && root->right == nullptr){
            s.push_back(res);
            return ; 
        }
        preorder(root->left, s, res);
        preorder(root->right, s, res);

    }

    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string>s;
      string res = "";
      preorder(root,s,res);
      return s;  
    }
};