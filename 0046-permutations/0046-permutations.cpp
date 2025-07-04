class Solution {
public:
void func(vector<int>&nums, int start, vector<int>&temp,vector<vector <int>>&result){
    if(temp.size()==nums.size()){
        result.push_back(temp);
        return;
    }
    for(int i = 0;i<nums.size();i++){
               // ✅ skip if nums[i] is already used in current permutation (temp)
            if (find(temp.begin(), temp.end(), nums[i]) != temp.end())
                continue;

   
        temp.push_back(nums[i]);
        func(nums,i+1,temp,result);
        temp.pop_back();
   // }
}
}
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>temp;
        vector<vector<int>>result;
        func(nums, 0 , temp , result);
        return result;
    }
};