class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr) return result;

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int size = q.size();
            vector<int> ans;

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                ans.push_back(curr->val);

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }

            if (level % 2 == 1) {
                reverse(ans.begin(), ans.end());  // ✅ Reverse just added level
            }

            result.push_back(ans);
            level++;
        }

        return result;
    }
};
