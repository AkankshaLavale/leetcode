class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowsize = matrix.size();
        int colsize = matrix[0].size();

        for(int row = 0; row < rowsize; row++){
            for(int col = 0; col<colsize;col++){
                if(matrix[row][col]==target){
                    return true;
                }
            }
        }

        return false;
    }
};