class Solution {
public:
    void func(vector<int>& nums, int start, vector<int>& temp, vector<vector<int>>& result) {
        result.push_back(temp);

        for (int i = start; i < nums.size(); ++i) {
            // ✅ Skip duplicates (only for same level of recursion)
            if (i > start && nums[i] == nums[i - 1]) continue;

            temp.push_back(nums[i]);
            func(nums, i + 1, temp, result);
            temp.pop_back();  // backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sorting is required to group duplicates
        vector<vector<int>> result;
        vector<int> temp;
        func(nums, 0, temp, result);
        return result;
    }
};
