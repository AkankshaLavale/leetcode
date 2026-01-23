class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int n = matrix.size();
        int m = matrix[0].size();

        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;

        while (top <= bottom && left <= right) {

            // 1) top row
            for (int col = left; col <= right; col++)
                ans.push_back(matrix[top][col]);
            top++;

            // 2) right column
            for (int row = top; row <= bottom; row++)
                ans.push_back(matrix[row][right]);
            right--;

            // 3) bottom row
            if (top <= bottom) {
                for (int col = right; col >= left; col--)
                    ans.push_back(matrix[bottom][col]);
                bottom--;
            }

            // 4) left column
            if (left <= right) {
                for (int row = bottom; row >= top; row--)
                    ans.push_back(matrix[row][left]);
                left++;
            }
        }

        return ans;
    }
};
