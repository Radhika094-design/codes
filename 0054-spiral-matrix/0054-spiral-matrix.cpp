class Solution {
public:
    vector<int> result;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return result;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        spiral(matrix, top, bottom, left, right);
        return result;
    }

    void spiral(vector<vector<int>>& matrix, int top, int bottom, int left, int right) {
        if (top > bottom || left > right) return;

        // 1. Traverse top row
        for (int i = left; i <= right; i++)
            result.push_back(matrix[top][i]);

        // 2. Traverse right column
        for (int i = top + 1; i <= bottom; i++)
            result.push_back(matrix[i][right]);

        // 3. Traverse bottom row
        if (top != bottom) {
            for (int i = right - 1; i >= left; i--)
                result.push_back(matrix[bottom][i]);
        }

        // 4. Traverse left column
        if (left != right) {
            for (int i = bottom - 1; i > top; i--)
                result.push_back(matrix[i][left]);
        }

        // Recurse into inner matrix
        spiral(matrix, top + 1, bottom - 1, left + 1, right - 1);
    }
};
