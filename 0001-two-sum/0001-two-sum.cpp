class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int , int> map ; 
       for( int i = 0 ;i< nums.size();i++){
            int x = nums[i];        
            int y  =  target - x ;
            if(map.contains(y)){
                return { map[y], i};
            }
            map[x] = i ; 
       }
       return{};
    } 
};