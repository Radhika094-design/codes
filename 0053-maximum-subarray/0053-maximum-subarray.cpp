class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0; 
        int maximum = INT_MIN;
        for( int i = 0 ; i<nums.size();i++){
            sum = sum + nums[i];
            maximum= max( maximum , sum);
            // if it is  giving negative sum take it as zero rather than minus in sum 
          if(sum< 0 ) sum = 0 ; 
        }
        return maximum ; 
    }
};