class Solution {
public:
   int binearysearch(vector <int>& nums , int target ){
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]== target){
                ans = mid;
                high = mid - 1 ; 
            }
            if(nums[mid]>target){
                high = mid - 1;
            }
            if(nums[mid]<target){
                low = mid + 1 ;
            }
        }
        return ans;
    }
int lastocc(vector<int> &nums, int target){
     int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]== target){
                ans = mid;
                low = mid + 1 ;  // this line i changed 
            }
            if(nums[mid]>target){
                high = mid - 1;
            }
            if(nums[mid]<target){
                low = mid + 1 ;
            }
        }
        return ans;
}
 vector<int> searchRange(vector<int>& nums, int target) {
    int frst =  binearysearch(nums, target);
    int last = lastocc(nums,target);
    return {frst,last};
 }
 };