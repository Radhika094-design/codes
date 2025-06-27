class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int num : nums) {
            total += num;
        }

        int lsum = 0;
        int rsum = total;

        for (int i = 0; i < nums.size(); i++) {
            rsum -= nums[i];  // exclude current element from right sum
            if (lsum == rsum) {
                return i;  // leftmost match
            }
            lsum += nums[i];  // include current element in left sum
        }

        return -1;
    }
};
