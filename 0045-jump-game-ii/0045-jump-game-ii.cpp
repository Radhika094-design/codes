class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jump = 0;
        int currjump = 0;
        int largejump = 0;
        for(int i = 0;i<n - 1;i++){    // n - 1
            largejump = max(largejump ,i +nums[i]);
        if(i == currjump){
            jump++;
            currjump = largejump;
        }
        }
       
        return jump;

    }
};