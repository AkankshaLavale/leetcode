class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        int maxFruits = 0;
        int i = 0, total = 0;

       
        for (int j = 0; j < n; ++j) {
            total += fruits[j][1];

          
            while (i <= j && stepsTooFar(fruits[i][0], fruits[j][0], startPos, k)) {
                total -= fruits[i][1];
                i++;
            }

            
            maxFruits = max(maxFruits, total);
        }

        return maxFruits;
    }

   
    bool stepsTooFar(int left, int right, int startPos, int k) {
        int leftFirst = abs(startPos - left) + (right - left);
        int rightFirst = abs(startPos - right) + (right - left);
        return min(leftFirst, rightFirst) > k;
    }
};
