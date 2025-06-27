class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            int correctindex = nums[i] -  1 ; 
            if(nums[i]!=nums[correctindex]){
                swap(nums[i],nums[correctindex]);
            }else{
                i++;
            }
        }
        for(int i  = 0;i<n;i++){
            if(nums[i]!=i+1){
                return nums[i];
            }
        }
        return  -1;
    }
};