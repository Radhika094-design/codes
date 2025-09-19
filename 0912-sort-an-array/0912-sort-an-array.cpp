class Solution {
public:
void merge(vector<int>&nums , int left ,int mid, int right ){
    //temperory array bcz divide into 2 peices
    int n1 = mid - left + 1;
    int n2 = right - mid;
    //tempory array for left L and right R 
    vector<int> L(n1),R(n2);
    for(int i =0;i<n1;i++){
        L[i]= nums[left + i ];
    }
        for(int j = 0;j<n2;j++){
            R[j] = nums[mid+1+j];
        }
        int i = 0 , j = 0 , k = left;
        while(i<n1 &&j<n2){
            if(L[i]<=R[j]){
              nums[k++] = L[i++];

            }
            else{
                nums[k++]=R[j++];
            }
        }
        while(i<n1) nums[k++]=L[i++];
        while(i<n2) nums[k++]=R[j++];
    
}
    void mergesort(vector<int>&nums,int left , int right){
        if(left>=right)return ;
        int mid = left +(right-left)/2;
        mergesort(nums,left,mid); //we divides here in 2 parts 
        mergesort(nums,mid+1,right);

        merge(nums,left,mid,right);// after divide its merge here from left to right 
    }
    vector<int> sortArray(vector<int>& nums) {
       mergesort(nums,0,nums.size()-1);
       return nums; 
    }
};