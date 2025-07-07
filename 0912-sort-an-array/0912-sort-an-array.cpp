class Solution {
public:
    // Merge two sorted halves of the array
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp; // Temporary array to hold merged result
        int i = left;     // Pointer for left half
        int j = mid + 1;  // Pointer for right half

        // Compare and merge both halves
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);  // Take from left half
                i++;
            } else {
                temp.push_back(nums[j]);  // Take from right half
                j++;
            }
        }

        // Add remaining elements from left half, if any
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // Add remaining elements from right half, if any
        while (j <= right) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy merged elements back to the original array
        for (int k = 0; k < temp.size(); ++k) {
            nums[left + k] = temp[k];
        }
    }

    // Recursive function to divide the array
    void mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) return;  // Base case: single element

        int mid = left + (right - left) / 2;

        // Recursively sort the left half
        mergeSort(nums, left, mid);

        // Recursively sort the right half
        mergeSort(nums, mid + 1, right);

        // Merge the sorted halves
        merge(nums, left, mid, right);
    }

    // Main function
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);  // Call merge sort on the whole array
        return nums;
    }
};
