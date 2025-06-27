class Solution {
public:
int func(vector<int>&weights , int d , int cap){
   int n = weights.size();
    int sum = 0;
    int day = 1;
    for(int i = 0;i<n;i++){
        if(sum+weights[i]<= cap){
            sum = sum+weights[i];
        }else{
            sum = weights[i];
            day++;
        }

    }
    if(day<=d){
        return true;
    }
    return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int largest = 0;
     //  int low = max_element(weights.begin(),weights.end());
     for(int i = 0;i<weights.size();i++){
        sum = sum + weights[i];
        if(weights[i]>largest){
            largest = weights[i];
        }

     }
     int low = largest , high = sum;
     int ans=0; //for store
     while(low<=high){
        int mid = (low+high)/2;
        if(func(weights,days,mid)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
     }
return ans;
    }

};