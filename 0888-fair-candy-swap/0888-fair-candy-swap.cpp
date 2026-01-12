class Solution {
public:
    vector<int> fairCandySwap(vector<int>& alice, vector<int>& bob) {

        int sumA = 0, sumB = 0;
        for (int x : alice) sumA += x;
        for (int y : bob) sumB += y;

        int diff = (sumB - sumA) / 2;

        unordered_set<int> bobSet;
        for (int y : bob) bobSet.insert(y);

        for (int x : alice) {
            int need = x + diff;
            if (bobSet.count(need)) {
                return {x, need};
            }
        }

        return {};
    }
};
