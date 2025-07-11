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
    TreeNode* buildTree(vector<int>& nums, int left, int right) {
        // Base case: if left index exceeds right, return null
        if (left > right) return nullptr;

        // Find middle index
        int mid = left + (right - left) / 2;

        // Create a new node from the mid value
        TreeNode* node = new TreeNode(nums[mid]);

        // Recursively build left and right subtrees
        node->left = buildTree(nums, left, mid - 1);
        node->right = buildTree(nums, mid + 1, right);

        return node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums, 0, nums.size() - 1);
    }
};

