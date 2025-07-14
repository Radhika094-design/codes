class Solution {
public:

//frst u have to check nums[i+1]>=reached 
//move from last side of array 
    bool canJump(vector<int>& nums) {
        int reached = 0;
        int n = nums.size();
       
        for(int i =0;i<n;i++){
             if(i>reached)return false;
            reached = max(reached , i + nums[i]);
        }
        return true;
    }
};