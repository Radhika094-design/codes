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
    void sum(TreeNode* root, int targetSum, int currSum, vector<int>& path, vector<vector<int>>& result) {
        if (root == nullptr) return;
        currSum += root->val;
        path.push_back(root->val);

        if (root->left == nullptr && root->right == nullptr) {
            if (currSum == targetSum) {
                result.push_back(path); 
            }
        }
        sum(root->left, targetSum, currSum, path, result);
        sum(root->right, targetSum, currSum, path, result);  
        path.pop_back(); // go back to try other paths
    }
 vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;
        int currSum = 0;
        sum(root, targetSum, currSum, path, result);
        return result;
    }
};
