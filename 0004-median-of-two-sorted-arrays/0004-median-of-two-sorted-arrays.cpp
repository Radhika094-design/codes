class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m + n;

        int i = 0, j = 0, count = 0;
        int prev = 0, curr = 0;

        int mid1 = total / 2 - 1;
        int mid2 = total / 2;

        while (count <= mid2) {
            prev = curr;

            if (i < m && (j >= n || nums1[i] < nums2[j])) {
                curr = nums1[i++];
            } else {
                curr = nums2[j++];
            }

            count++;
        }

        if (total % 2 == 0) {
            return (prev + curr) / 2.0;
        } else {
            return curr;
        }
    }
};
