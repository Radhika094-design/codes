class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};

        int m = matrix.size(), n = matrix[0].size();
        vector<int> result(m * n);
        int row = 0, col = 0;

        for (int i = 0; i < m * n; i++) {    // m*n size of array to store travesral
            result[i] = matrix[row][col];
        // if the row + col is even  move up right 
            if ((row + col) % 2 == 0) {
                if (col == n - 1) row++;   // if last column
                else if (row == 0) col++; //if at frst row
                else { row--; col++; }
            } else {   //if sum is odd move down left
                if (row == m - 1) col++;   // if at last row 
                else if (col == 0) row++;  // if we at frst column.
                else { row++; col--; }
            }
        }
        // return until m*n elements filled in result
        return result;
    }
};