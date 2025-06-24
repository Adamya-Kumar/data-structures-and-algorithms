class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    // First, binary search to find the correct row
    int top = 0, bottom = rows - 1;
    while (top <= bottom) {
        int mid = (top + bottom) / 2;
        if (target < matrix[mid][0]) {
            bottom = mid - 1;
        } else if (target > matrix[mid][cols - 1]) {
            top = mid + 1;
        } else {
            // target is in this row
            int left = 0, right = cols - 1;
            while (left <= right) {
                int m = (left + right) / 2;
                if (matrix[mid][m] == target) return true;
                else if (matrix[mid][m] < target) left = m + 1;
                else right = m - 1;
            }
            return false; // target not found in the row
        }
    }
    return false; // target not in any row range
}

};