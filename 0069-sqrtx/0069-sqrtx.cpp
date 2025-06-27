class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        int low = 0;
        int high = x;
        while(low<=high){
            long mid = (low+high)/2;
            long square = mid*mid;
            if(square==x){
                return (int)mid;
            }
            if(square>x){
               // ans = mid ;
                high = mid - 1;
            }
            if(square<x){
                ans = (int)mid;
                low = mid + 1;
            }
        }
        return ans;
    }
};