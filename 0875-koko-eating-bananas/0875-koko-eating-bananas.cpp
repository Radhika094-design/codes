class Solution {
public:
    // Helper function to check if Koko can eat all piles at speed k within h hours
    bool canEatAll(vector<int>& piles, int k, int h) {
        int hours = 0;
        for (int pile : piles) {
            hours += (pile + k - 1) / k;  
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = (low + high) / 2;

            if (canEatAll(piles, mid, h)) {
                high = mid;  // try smaller k
            } else {
                low = mid + 1;  // need more speed
            }
        }

        return low;
    }
};



