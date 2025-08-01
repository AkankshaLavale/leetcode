class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int row = 0; row < numRows; row++) {
            vector<int> currentRow;
            long long ans = 1;
            currentRow.push_back(ans);

            for (int col = 1; col <= row; col++) {
                ans = ans * (row - col + 1) / col;
                currentRow.push_back(ans);
            }

            triangle.push_back(currentRow);
        }

        return triangle;
    }
};
