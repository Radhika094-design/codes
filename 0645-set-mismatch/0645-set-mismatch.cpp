class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int i  = 0 ;
        while(i<n){
             int correctindex = nums[i] - 1 ;
            if( nums[i]!= nums[correctindex]){
               swap(nums[i],nums[correctindex]);
               
            }else{
                i++;
            }
        }
vector<int>res;
        for(int i  = 0;i<nums.size();i++){
            if(nums[i]!= i + 1){
                       
                res.push_back(nums[i]);
                res.push_back(i+1);
            }
        }

        return res;
    }
};