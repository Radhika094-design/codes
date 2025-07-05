class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& temp, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            // Skip duplicates at the same tree level
            if (i > start && candidates[i] == candidates[i - 1]) continue;

            if (candidates[i] > target) break; // No point going further

            temp.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1, temp, result); // i+1 since we can't reuse
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // Important for skipping duplicates
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(candidates, target, 0, temp, result);
        return result;
    }
};
