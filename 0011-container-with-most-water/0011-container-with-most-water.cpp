class Solution {
public:
    int maxArea(vector<int>& height) {
        //using two pointers .
        
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;  // to find max water contains
        // make sure two pointers dont cross each other.
        while (left < right) { 
            // current area is min height btw lft and ryt pointers.
            int currentArea = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, currentArea);
            // check heights 
            if (height[left] < height[right]) { 
                // move left pointer bcz height of left container is limiting factor
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
    
};