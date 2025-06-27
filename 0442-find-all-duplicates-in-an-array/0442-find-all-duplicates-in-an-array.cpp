class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dupli;
        int n = nums.size();
        int i = 0;

        while(i < n){
            int correctindex = nums[i] - 1;

            // Place nums[i] at its correct index if not already
            if(nums[i] != nums[correctindex]){
                swap(nums[i], nums[correctindex]);
            } else {
                i++;
            }
        }

        // After placing, check for mismatches = duplicates
        for(int i = 0; i < n; i++){
            if(nums[i] != i + 1){
                dupli.push_back(nums[i]);
            }
        }

        return dupli;
    }
};
