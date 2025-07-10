class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelsize = q.size();
            vector<int> level;  // To store nodes at the current level

            for (int i = 0; i < levelsize; i++) {
                TreeNode* current = q.front();
                q.pop();
                level.push_back(current->val);

                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }

            ans.push_back(level);  // Store the current level
        }

        return ans;
    }
};
