class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        // Check each of the 32 bits (int size)
        for (int i = 0; i < 32; ++i) {
            int sum = 0;
            for (int num : nums) {
                if (num & (1 << i)) {
                    sum++;
                }
            }
            // If sum % 3 != 0, that bit belongs to the unique number
            if (sum % 3 != 0) {
                result |= (1 << i);
            }
        }
        return result;
    }
};
