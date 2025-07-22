class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, int> map ;
        for( int i = 0 ; i< nums.size() - 1 ;i++){
            // sum  4+ 2    then check 2+ 4
            int sum = nums[i]+nums[i+1];
            // as map is empty when 4 + 2 so false  \\ yes because map contain 6 
            if(map.count(sum))return true ;
            // store it in map 6 
            map[sum] = i ; 
        }
        return false; 
    }
};